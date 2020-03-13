extern crate protoc_rust;

use protoc_rust::Customize;
use std::path::PathBuf;

struct CommandArguments {
    output_dir: String,
    input_file: String,
    input_dir: String
}

fn main() {
    let args: Vec<String> = std::env::args().collect();
    if args.len() < 3 {
        println!("Usage: protoc-rust-cli OUT_DIR PROTO_FILES");
        std::process::exit(1);
    }

    let output_dir_str = args[1].replace("--out=", "");
    let output_dir = PathBuf::from(&output_dir_str);
    if !output_dir.exists() || !output_dir.is_dir() {
        println!("Usage: protoc-rust-cli OUT_DIR PROTO_FILES");
        println!("{}: Invalid output directory", output_dir_str);
        std::process::exit(1);
    }

    let mut input_file_str = args[2].replace("--in=", "");
    let mut input_file = PathBuf::from(&input_file_str);
    if !input_file.exists() {
        println!("Usage: protoc-rust-cli OUT_DIR PROTO_FILES");
        println!("{}: Invalid input .proto file", input_file_str);
        std::process::exit(1);
    }

    input_file_str = input_file.file_name().unwrap().to_str().unwrap().to_string();
    let mut input_dir_str = ".".to_string();
    if input_file.pop() && input_file.to_str().unwrap() != "" {
        input_dir_str = input_file.canonicalize().unwrap().to_str().unwrap().to_string();
    }

    let cli_args = CommandArguments {
        output_dir: output_dir_str,
        input_file: format!("{}/{}", input_dir_str, input_file_str),
        input_dir: input_dir_str
    };

    protoc_rust::run(protoc_rust::Args {
        out_dir: &cli_args.output_dir,
        input: &[&cli_args.input_file],
        includes: &[&cli_args.input_dir],
        customize: Customize {
            ..Default::default()
        },
    }).expect("protoc");
}
