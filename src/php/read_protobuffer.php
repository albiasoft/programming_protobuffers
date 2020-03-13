<?php
require "vendor/autoload.php";
require "protos/Company.php";
require "protos/Company_CompanyCategory.php";
require "protos/GPBMetadata/Proto3/Company.php";

use Google\Protobuf\Timestamp;
use Google\Protobuf\Internal\InputStream;

if($argc != 2) {
  print "Usage: php read_protobuffer.php IN_PROTOBUFFER_FILE\n";
  exit(1);
}

// Load the protobuffer from file
if(!is_file($argv[1])) {
  print "Error: could not read the protobuffer file".$argv[1]."\n";
  exit(1);
}

$protobuffer = new Company();
$protobuffer->mergeFromString(file_get_contents($argv[1]));

print "Id: ".$protobuffer->getId()."\n";
print "Name: ".$protobuffer->getName()."\n";
print "Description: ".$protobuffer->getDescription()."\n";
print "Category: ".$protobuffer->getCategory()."\n";
print "Employees: ".$protobuffer->getEmployees()."\n";
print "Active: ".$protobuffer->getActive()."\n";

// Format the 'created' date string from a google::protobuf::Timestamp
$created_timestamp = $protobuffer->getCreated();
$timestamp = $created_timestamp->getSeconds();
date_default_timezone_set("Europe/Paris");
print "Created: ".date("Y-m-d\TH:i:s\Z", $timestamp)."\n";

// Save the logo image to a file
if(file_put_contents("logo.jpg", $protobuffer->getLogo()) == FALSE) {
  print "Error: cout not save the company logo in logo.jpg file\n";
  exit(1);
} else {
  print "Logo saved in file logo.jpg\n";
}

exit(0);
?>
