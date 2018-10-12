#include "Serv.h"
#include <memory>
#include </usr/local/include/thrift/transport/TSocket.h>
#include </usr/local/include/thrift/transport/TBufferTransports.h>
#include </usr/local/include/thrift/protocol/TBinaryProtocol.h>
using namespace apache::thrift;
using namespace apache::thrift::protocol;
using namespace apache::thrift::transport;


int main(int argc, char **argv) {
    std::shared_ptr<TSocket> socket(new TSocket("localhost", 9090)); //注意此处的ip和端口
    std::shared_ptr<TTransport> transport(new TBufferedTransport(socket));
    std::shared_ptr<TProtocol> protocol(new TBinaryProtocol(transport));
    transport->open();

    // 我们的代码写在这里
    Student s;
    s.sno = 123;
    s.sname = "xiaoshe";
    s.ssex = 1;
    s.sage = 30;   
    ServClient client(protocol);
    printf("put...\n");
    client.put(s);

    return 0;
}
