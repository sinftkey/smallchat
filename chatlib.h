#ifndef CHATLIB_H
#define CHATLIB_H

/* Networking. 网络*/
int createTCPServer(int port);
int socketSetNonBlockNoDelay(int fd);
int acceptClient(int server_socket);
int TCPConnect(char *addr, int port, int nonblock);

/* Allocation. 内存分配*/
void *chatMalloc(size_t size);
void *chatRealloc(void *ptr, size_t size);

#endif // CHATLIB_H
