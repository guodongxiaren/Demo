mkdir -p server
mkdir -p client
thrift --gen cpp -out client student.thrift
thrift --gen cpp -out server student.thrift
rm client/Serv_server.skeleton.cpp
cp server/Serv_server.skeleton.cpp server/Serv_server.cpp
