/*	The procedure of the server
 *		1. create the new communication of the socket
 *		2. bind, attach a local address to a socket
 *		3. listen, announce willingness to accept connections
 *		4. accept, block caller until a connection request arrives
 * 		5. SERVE THE CLIENT
 * 		6. close, release the connection
 * */
#include<string.h>
#include<unistd.h>
#include"../include/connection_common.h"

int main(int argc, char *argv[]){
	int server_fd, server_portno, client_fd, pid;
	socklen_t clilen;
	struct sockaddr_in serv_addr, cli_addr;
	if(argc < 2){
		fprintf(stderr, "ERROR, no port provided\n");
		fprintf(stderr, "Usage: ./server port\n");
		exit(1);
	}
	// Create the socket
	server_fd = socket(AF_INET, SOCK_STREAM, 0);
	if(server_fd < 0)
		error("ERROR opening socket");

	bzero((char *) &serv_addr, sizeof(serv_addr));
	server_portno = atoi(argv[1]);
	serv_addr.sin_family = AF_INET;
	serv_addr.sin_addr.s_addr = INADDR_ANY;
	serv_addr.sin_port = htons(server_portno);
	// Bind to the address
	if(bind(server_fd, (struct sockaddr *) &serv_addr, sizeof(serv_addr)) < 0)
		error("ERROR on binding");
	// Listen
	listen(server_fd, 5);

	clilen = sizeof(cli_addr);
	// Accept
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

	// Close
	close(server_fd);
	return 0;
}
