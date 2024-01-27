# Nom de l'exécutable à générer
TARGET = server

# Compilateur à utiliser
CC = g++

# Options de compilation
CFLAGS = -Wall -g

DEPS = http_tcpServer.h

OBJ = server.o http_tcpServer.o

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

clean:
	rm -f $(OBJ) $(TARGET)

.PHONY: all clean

