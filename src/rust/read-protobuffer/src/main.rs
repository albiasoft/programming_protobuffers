extern crate chrono;
extern crate fsio;
mod protocol;

use chrono::prelude::DateTime;
use chrono::Local;
use protobuf::parse_from_bytes;
use std::time::{Duration, UNIX_EPOCH};

use crate::fsio::file;
use crate::protocol::Company;

fn main() {
    let args: Vec<String> = std::env::args().collect();
    if args.len() != 2 {
        println!("Error: could not read protobuffer file {}", args[1]);
        std::process::exit(1);
    }

    let data = file::read_file(args[1].as_str()).unwrap();
    let _protobuffer: Company = parse_from_bytes::<Company>(&data).unwrap();

    println!("Id: {}", _protobuffer.id);
    println!("Name: {}", _protobuffer.name);
    println!("Description: {}", _protobuffer.description);
    println!("Category: {:?}", _protobuffer.category);
    println!("Employees: {}", _protobuffer.employees);
    println!("Active: {}", _protobuffer.active);

    // Format the "created" date string from a google::protobuf::Timestamp
    let _created: protobuf::SingularPtrField<::protobuf::well_known_types::Timestamp> = _protobuffer.created;
    let _timestamp = _created.unwrap().get_seconds();

    let d = UNIX_EPOCH + Duration::from_secs(_timestamp as u64);
    let datetime = DateTime::<Local>::from(d); // Local => Local timezone. UTC+1 in here in Catalonia
    let timestamp_str = datetime.format("%Y-%m-%dT%H:%M:%SZ").to_string();
    println!("Created: {}", timestamp_str);

    // Save the logo image to a file
    let bytes: &[u8] = &_protobuffer.logo;
    let result = file::write_file("logo.jpg", bytes);
    if result.is_ok() {
        println!("Logo saved in file logo.jpg");
    } else {
        println!("Error: could not save the company logo in logo.jpg file");
        std::process::exit(1);
    }

    std::process::exit(0);
}
