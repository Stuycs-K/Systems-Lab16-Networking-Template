#include "networking.h"

void subserver_logic(int client_socket){

}

int main(int argc, char *argv[] ) { 
  int client_socket = server_setup(); 


  client_socket = server_tcp_handshake(client_socket);

}
