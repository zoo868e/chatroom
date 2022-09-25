#ifndef CONNECTION_COMMON
#define CONNECTION_COMMON
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>

void error(const char *msg);
void serve(int sockfd);
void welcome(char *user_name);
void leave(char *user_name);
#endif
