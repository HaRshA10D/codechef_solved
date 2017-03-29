#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <string.h>

int main(){
 int socketid, cl_socketid;
 struct sockaddr_in port_address;
 struct sockaddr_storage serverStorage;
 char message[100];
 socklen_t addr_size;
 int i = 0;

 socketid = socket(PF_INET, SOCK_STREAM, 0); 

 port_address.sin_family = AF_INET;
 port_address.sin_port = htons(5357);
 port_address.sin_addr.s_addr = inet_addr("10.10.39.119");

 memset(port_address.sin_zero, '\0', sizeof port_address.sin_zero);  
 bind(socketid, (struct sockaddr*) &port_address, sizeof(port_address));

 if(listen(socketid, 10)==0) printf("Listening\n"); 
 else printf("Can't Listen\n");
 
 addr_size = sizeof serverStorage;
 
 cl_socketid = accept(socketid, (struct sockaddr *) &serverStorage, &addr_size);

 while(i<3){
  recv(cl_socketid,message,100,0);
  printf("1 New Message!: %s\n",message);
  i++;
 }
 return 0;
}
