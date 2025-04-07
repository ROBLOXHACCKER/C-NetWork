#include "../include/utils.h"

int main()
{
    int sock;
    struct sockaddr_in server;
    int porta = 10000;
    if((sock = socket(AF_INET, SOCK_STREAM ,0)) < 0)
    {
        perror("Errore: socket non creato");
        exit(-1);
    };

    server.sin_family = AF_INET;
    server.sin_addr.s_addr = INADDR_ANY;
    server.sin_port = htons(porta);

    if(bind(sock, (struct sockaddr*)&server, sizeof(server))< 0)
    {
        perror("bind non completato");
        exit(-1);
    }

    if(getsockname(sock, (struct sockaddr*)&server, sizeof(server)) < 0)
    {
        perror("Errore: bind");
        exit(-1);
    }

    listen(sock, MAX_CONNECTIONS);


}