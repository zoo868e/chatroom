#ifndef CONNECTION_COMMON
#define CONNECTION_COMMON
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<netdb.h>
#include"communicate.h"

void error(const char *msg);
void start_server(int &sockfd);
void start_client(int &sockfd);
void serve(int &sockfd);
void welcome(char *user_name);
void leave(char *user_name);
#endif
