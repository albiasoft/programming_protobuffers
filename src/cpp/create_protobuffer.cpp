#include <iostream>
#include <fstream>
#include <cstdio>
#include <ctime>
#include "rapidjson/document.h"
#include "rapidjson/filereadstream.h"
#include "base64/base64.h"
#include "proto3/company.pb.h"

int main(int argc, char *argv[]) {
  if (argc != 3) {
    std::cerr << "Usage: create_protobuffer COMPANY_JSON_FILE OUT_PROTOBUFFER_FILE" << std::endl;
    return -1;
  }

  std::cout << "Creating protobuffer file from JSON... ";

  FILE* fp = fopen(argv[1], "r");
  if (fp == NULL) {
    std::cerr << "[ ERROR ] could not open file" << argv[1] << std::endl;
    return -1;
  }

  char json_buffer[16384]; //2 to the 14 power (https://en.wikipedia.org/wiki/Power_of_two)
  rapidjson::FileReadStream input_stream(fp, json_buffer, sizeof(json_buffer));
  rapidjson::Document doc;

  // Parse the JSON document
  if(doc.ParseStream(input_stream).HasParseError()) {
    std::cerr << "[ ERROR ] " << argv[1] << " is not a vald JSON. " << std::endl;
    fclose(fp);
    return -1;
  }

  fclose(fp);

  // Create and fill the protobuffer using the data from the JSON file
  Company *protobuffer = new Company();
  protobuffer->set_id(doc["id"].GetInt());
  protobuffer->set_name(doc["name"].GetString());
  protobuffer->set_description(doc["description"].GetString());
  protobuffer->set_category((Company_CompanyCategory)doc["category"].GetInt());
  protobuffer->set_employees(doc["employees"].GetInt());
  protobuffer->set_active(doc["active"].GetBool());
  protobuffer->set_logo(base64_decode(doc["logo"].GetString()));

  // Create the google:protobuf::Timestamp from date string
  struct tm created;
  strptime(doc["created"].GetString(), "%Y-%m-%dT%H:%M:%SZ", &created);

  google::protobuf::Timestamp *created_timestamp = new google::protobuf::Timestamp();
  created_timestamp->set_seconds(mktime(&created));
  created_timestamp->set_nanos(0);
  protobuffer->set_allocated_created(created_timestamp);

  // Save the protobuffer to a binary file
  std::fstream output_stream(argv[2], std::ios::out | std::ios::trunc | std::ios::binary);
  if(!protobuffer->SerializeToOstream(&output_stream)) {
    std::cerr << "[ ERROR ] Failed to write to file" << argv[2] << std::endl;
    delete protobuffer;
    return -1;
  }

  std::cout << "[ OK ]" << std::endl;

  delete protobuffer;
  return 0;
}
