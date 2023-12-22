# Systems TCP Networking Lab.

1. Complete the networking code to allow a client and server to open a socket between them.
2. Verify that you can open a socket on the local host, then try it from a different machine.
3. After you can connect, repurpose your forking server as follows:

Server
1. Listens for a string (use the buffer size),
2. Reply with the rot13 of the string.

Client 
1. Prompts the user for a string.
2. Send the user input to the client.
3. Read the modified string from the server
4. prints the modified string
