#ifndef DNS_H
#define DNS_H

#include    <arpa/inet.h>   //inet_addr , inet_ntoa , ntohs etc

uint16_t is_responsible(long int*, int sin_family);

#endif // DNS_H