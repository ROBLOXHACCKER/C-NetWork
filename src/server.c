#include "../include/utils.h"

int main(void)
{
    struct sockaddr_in server;
    int sock;

    //Create Server
    server.sin_family = AF_INET; //IPv4
    server.sin_addr.s_addr = INADDR_ANY; //any free IP
    server.sin_port = htons(PORT); //server port

    //Create Socket
    sock = Socket(AF_INET, SOCK_STREAM, 0); //IPv4 | TCP | Automatic Protocol
    
    //Bind
    bind(sock, (struct sockaddr *)&server, sizeof(server));

    //CheckBind
    getsockname(sock, (struct sockaddr *)&server, sizeof(server));

    //Listen
    listen(sock, MAX_CONNECTIONS);

    





    return 0;
}