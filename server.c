#include "networking.h"
int main(int argc, char *argv[] ) { 
	int client_socket = server_setup(); 
  
  client_socket = server_tcp_handshake(client_socket);
	
	

}
