#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>  
#include <unistd.h>  
#include <sys/types.h> 
#include <sys/socket.h> 
#include <netinet/in.h>  
#include <arpa/inet.h>  

#define MAX_CONNECTIONS 10
#define PORT 10000