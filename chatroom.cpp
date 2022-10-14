#include<iostream>
#include"./include/connection_common.h"
#include"./include/interface.h"
using namespace std;
int main(int argc, char* argv[]){
	int server_fd, server_portno, pid;
	struct sockaddr_in serv_addr;
	if(argc < 2){
		cerr << "ERROR, no port provided" << endl;
		cerr << "Usage: ./Chatroom port" << endl;
		exit(1);
	}
	server_fd = socket(AF_INET, SOCK_STREAM, 0);
	if(server_fd < 0)
		error("ERROR opening socket");
	bzero((char*) &serv_addr, sizeof(serv_addr));
	server_portno = atoi(argv[1]);
	serv_addr.sin_family = AF_INET;
	serv_addr.sin_addr.s_addr = INADDR_ANY;
	serv_addr.sin_port = htons(server_portno);
	if(bind(server_fd, (struct sockaddr*) &serv_addr, sizeof(serv_addr)) < 0)
		error("ERROR on binding");

	listen(server_fd, 5);
	int client_fd;
	socklen_t clilen;
	struct sockaddr_in cli_addr;
	clilen = sizeof(cli_addr);
	while(1){
		client_fd = accept(server_fd, (struct sockaddr *) &cli_addr, &clilen);
		if(client_fd < 0)
			error("ERROR on accept");
		pid = fork();
		if(pid < 0)
			error("ERROR on fork");
		if(pid == 0){
			close(server_fd);
			// SERVE THE CLIENT
			serve(client_fd);
			printf("client %d just disconnect\n", client_fd);
			exit(0);
		}
		else close(client_fd);
	}

	close(server_fd);
	return 0;
}
