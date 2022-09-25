#include"../include/connection_common.h"

void error(const char *msg){
	perror(msg);
	exit(1);
}

void serve(int sockfd){
	int n;
	char buffer[256], user_name[256];
	bzero(user_name, 256);
	n = read(sockfd, user_name, 255);
	user_name[strlen(user_name) - 1] = '\0';
	if(n < 0){
		perror("ERROR reading from socket");
		printf("LEAVE: sockfd %d just leave the server\n", sockfd);
		return;
	}
	else{
		n = write(sockfd, "1", 1);
		if(n < 0)
			error("ERROR writeing to client");
	}
	welcome(user_name);
	while(1){
		bzero(buffer, 256);
		n = read(sockfd, buffer, 255);
		if(n < 0)
			error("ERROR reading from socket");
		if(strcmp(buffer, "exit\n") == 0){
			leave(user_name);
			return;
		}
		printf("MESSA: %s: %s", user_name, buffer);
		n = write(sockfd, "1", 1);
		if(n < 0)
			error("ERROR writing to client");
	}
}

void welcome(char *user_name){
	printf("LOG: %s join the server\n", user_name);
}
void leave(char *user_name){
	printf("LOG: %s just leave the server\n", user_name);
}
