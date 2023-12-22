#include "networking.h"

void subserver_logic(int client_socket){

}

int main(int argc, char *argv[] ) { 
  int listen_socket = server_setup(); 


  int client_socket = server_tcp_handshake(listen_socket);

}
