FROM gcc:latest

WORKDIR /app

COPY server.cpp .
COPY http_tcpServer.cpp .
COPY http_tcpServer.h .

RUN g++ -o server server.cpp http_tcpServer.cpp

EXPOSE 8080

CMD ["./server"]

