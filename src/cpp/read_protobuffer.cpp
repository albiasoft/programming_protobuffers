#include <iostream>
#include <fstream>
#include <cstdio>
#include <ctime>
#include "proto3/company.pb.h"

int main(int argc, char *argv[]) {
  if(argc != 2) {
    std::cerr << "Usage: read_protobuffer IN_PROTOBUFFER_FILE" << std::endl;
    return -1;
  }

  // Load the protobuffer from file
  Company *protobuffer = new Company();

  std::fstream input_stream(argv[1], std::ios::in | std::ios::binary);
  if(!protobuffer->ParseFromIstream(&input_stream)) {
    std::cerr << "Error: could not read protobuffer file " << argv[1] << std::endl;
    return -1;
  }

  std::cout << "Id: " << protobuffer->id() << std::endl;
  std::cout << "Name: " << protobuffer->name() << std::endl;
  std::cout << "Description: " << protobuffer->description() << std::endl;
  std::cout << "Category: " << protobuffer->category() << std::endl;
  std::cout << "Employees: " << protobuffer->employees() << std::endl;
  std::cout << "Active: " << protobuffer->active() << std::endl;

  // Format the 'create' date string from a google::protobuf::Timestamp
  google::protobuf::Timestamp created_timestamp = protobuffer->created();
  const time_t timestamp = (const time_t)created_timestamp.seconds();
  struct tm *created = localtime(&timestamp);
  char created_char_buffer[30];
  strftime(created_char_buffer, sizeof(created_char_buffer), "%Y-%m-%dT%H:%M:%SZ", created);
  std::cout << "Created: " << std::string(created_char_buffer) << std::endl;

  // Save the logo image to a file
  std::ofstream output_logo_file("logo.jpg", std::ofstream::binary | std::ios::out);
  if(output_logo_file.good()) {
    output_logo_file.write(protobuffer->logo().c_str(), protobuffer->logo().size());
    output_logo_file.close();
    std::cout << "Logo saved in file logo.jpg" << std::endl;
  } else {
    std::cerr << "Error: could not save the company logo in logo.jpg file " << std::endl;
    return -1;
  }

  delete protobuffer;
  return 0;
}
