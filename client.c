#include "networking.c"
int main(int argc, char *argv[] ) {
	char* IP = "127.0.0.1";
		if(argc>1)IP=argv[1];
	
  int server_socket = client_tcp_handshake(IP);
	printf("client connected.\n");
	
	//client code here.

}
