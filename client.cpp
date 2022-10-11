#include"./include/connection_common.h"
#include<iostream>

using namespace std;

int main(int argc, char *argv[]){
	if(argc < 3){
		cerr << "Usage " << argv[0] << " hostname port" << endl;
		exit(0);
	}
	int sockfd = socket(AF_INET, SOCK_STREAM, 0), portno = atoi(argv[2]), n;
	if(sockfd < 0)
		error("ERROR opening socket");
	struct sockaddr_in serv_addr;
	struct hostent *server;
	server = gethostbyname(argv[1]);
	if(server == NULL){
		cerr << "ERROR, no such host" << endl;
		exit(0);
	}
	bzero((char *) &serv_addr, sizeof(serv_addr));
	serv_addr.sin_family = AF_INET;
	bcopy((char *)server->h_addr, (char *)&serv_addr.sin_addr.s_addr, server->h_length);
	serv_addr.sin_port = htons(portno);
	if(connect(sockfd, (struct sockaddr *) &serv_addr, sizeof(serv_addr)) < 0)
		error("ERROR connecting");
	char buffer[256];
	do{
		cout << "Pleas enter the message: ";
		bzero(buffer, 256);
		fgets(buffer, 255, stdin);
		n = write(sockfd, buffer, strlen(buffer));
		if(n < 0)
			error("ERROR writing to socket");
		bzero(buffer, 256);
		n = read(sockfd, buffer, 255);
		if(n < 0)
			error("ERROR reading from socket");
		cout << buffer;
	}while(1);

}
