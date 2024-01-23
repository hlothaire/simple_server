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
  TcpServer(std::string ip_address, int port);
  ~TcpServer();
  void startListen();

private:
  std::string _ip_address;
  int _port;
  int _socket;
  int _new_socket;
  long _incomingMessage;
  struct sockaddr_in _socketAddress;
  unsigned int _socketAddress_len;
  std::string _serverMessage;

  int startServer();
  void closeServer();
  void acceptConnection(int &new_socket);
  std::string buildResponse();
  void sendResponse();
};

} // namespace http

#endif // !INCLUDED_HTTP_TCPSERVER
