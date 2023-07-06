#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <arpa/inet.h> 

/* struct sockaddr { */
/*   // AF_INET (IPv4) or AF_INET6 (IPv6) */
/*   unsigned short sa_family; */
/*   char sa_data[14]; */
/* }; */

struct addrinfo { 
  int ai_flags;
  // AF_INET, AF_INET6, AF_UNSPEC
  int ai_family;
  // SOCK_STREAM, SOCK_DGRAM
  int ai_socktype; 
  int ai_protocol;
  size_t ai_addrlen;
  struct sockaddr *ai_addr;
  char *ai_canonname; 
  
  struct addrinfo *ai_next;
};

/* struct in_addr { */
/*   uint32_t s_addr; // that's a 32-bit int (4 bytes) */
/* }; */

/* struct sockaddr_in { */
/*   short int sin_family; */ 
/*   unsigned short int sin_port;  // Port number */
/*   struct in_addr sin_addr;      // Internet address */
/*   unsigned char sin_zero[8];    // Same size as struct sockaddr */
/* }; */

/* void htons() {}; // host to network short */
/* void htonl() {}; // host to network long */
/* void ntohs() {}; // network to host short */
/* void ntohl() {}; // network to host long */

int main(int argc, char *argv[])
{
  struct addrinfo hints, *res, *p;
  int status;
  char ipstr[INET6_ADDRSTRLEN];

  if (argc != 2) {
    fprintf(stderr,"usage: showip hostname\n");
    return 1;
  }

  memset(&hints, 0, sizeof hints);
  hints.ai_family = AF_UNSPEC;
  hints.ai_socktype = SOCK_STREAM;

  printf("ipstr: %s\n", ipstr);

  return 0;
}
