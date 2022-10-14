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
#include<iostream>

void error(const char *msg);
void connect_server(int &sockfd, string server_name, string server_port);
void serve(int &sockfd);
void welcome(char *user_name);
void leave(char *user_name);
#endif
