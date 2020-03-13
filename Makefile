protos:
	protoc --php_out=src/php/protos ./proto3/company.proto
	protoc --cpp_out=src/cpp/protos ./proto3/company.proto
	cd src/rust/protoc-rust-cli && cargo build
	./src/rust/protoc-rust-cli/target/debug/protoc-rust-cli --out=./src/rust/protos ./proto3/company.proto

