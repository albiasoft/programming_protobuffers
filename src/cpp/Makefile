CXX=g++
SDKROOT=/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.15.sdk
CFLAGS=-std=c++11 -stdlib=libc++ -Ofast -Iprotos -Ithird_parties/rapidjson/include -I/usr/local/include -Ithird_parties -isysroot $(SDKROOT)
LDFLAGS=-lprotobuf -L/usr/local/lib
EXEC_CREATE_PROTOBUFFER=create_protobuffer

create_protobuffer: base64.o company.pb.o
	$(CXX) $(CFLAGS) $(LDFLAGS) create_protobuffer.cpp base64.o company.pb.o -o $(EXEC_CREATE_PROTOBUFFER)

base64.o: third_parties/base64/base64.cpp
	$(CXX) -c $(CFLAGS) third_parties/base64/base64.cpp

company.pb.o: protos/proto3/company.pb.cc
	$(CXX) -c $(CFLAGS) protos/proto3/company.pb.cc

clean:
	rm -f $(EXEC_CREATE_PROTOBUFFER) *.o *.gch
