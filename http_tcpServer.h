#ifndef INCLUDED_HTTP_TCPSERVER
#define INCLUDED_HTTP_TCPSERVER

#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <sys/socket.h>

namespace http {

class TcpServer {
public:
  TcpServer();
  ~TcpServer();

private:
  std::string _ip_address;
  int _port;
  int _scoket;
  int _new_socket;
  long _incommingMessage;
  struct sockaddr_in _socketAddress;
  unsigned int _socketAddress_len;
  std::string _serverMessage;
};

} // namespace http

#endif // !INCLUDED_HTTP_TCPSERVER
