BIN=client
THRIFT_INC=/usr/local/include
THRIFT_LIB=/usr/local/lib
CC=g++
CFLAGS=-g -std=c++11 
STUB_SOURCE=Serv.cpp  student_constants.cpp  student_types.cpp
ALL:$(BIN)

$(BIN): 
	$(CC) $(CFLAGS) -o $@ client.cpp $(STUB_SOURCE) -I $(THRIFT_INC) -L $(THRIFT_LIB) -lthrift

.PHONY: clean
clean:
	rm -rf $(BIN)
