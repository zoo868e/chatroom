#include"../include/connection_common.h"

void error(const char *msg){
	perror(msg);
	exit(1);
}

void connect_server(int &sockfd, char* server_name, string server_port){
	struct sockaddr_in serv_addr;
	struct hostent *server;
	server = gethostbyname(server_name);
	if(server == NULL){
		cerr << "ERROR, no such host" << endl;
		exit(0);
	}
	bzero((char *) &serv_addr, sizeof(serv_addr));
	serv_addr.sin_family = AF_INET;
	bcopy((char *)server->h_addr, (char *)&serv_addr.sin_addr.s_addr, server->h_length);
	serv_addr.sin_port = htons(stoi(server_port));
	if(connect(sockfd, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0)
		error("ERROR connecting");
}

void serve(int &sockfd){
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
