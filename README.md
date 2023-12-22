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
