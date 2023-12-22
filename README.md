# Systems TCP Networking Lab.

1. Complete the networking code to allow a client and server to open a socket between them.
2. Verify that you can open a socket on the local host, then try it from a different machine.
3. After you can connect, repurpose your forking server by allowing any number of concurrent connections from clients.
4. Your client/server logic will be different than before (see below)

Server: (place this in a function)
1. Listens for a string (use the buffer size),
2. Reply with the rot13 of the string.

Client: (Place this in a function)
1. Prompts the user for a string.
2. Send the user input to the client.
3. Read the modified string from the server
4. prints the modified string

# networking.c

server_handshake and client_handshake will not look the same.

Remember that the server must:
1. getaddrinfo() - once.
2. socket() - once.
3. bind() - once.
4. listen() - once.
5. accept() - MANY times.

As a result, the one-time use code goes in the server_setup, and the accept is placed in the server_handshake function.

The client places all of this code in the client_handshake
1. getaddrinfo() - once.
2. socket() - once.
5. connect() - once.


