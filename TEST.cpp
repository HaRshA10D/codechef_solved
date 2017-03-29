#include<stdio.h>
int main(){
int x,f=0,i;
for(i=0;i<100;i++){
	scanf("%d",&x);
if(x==42)
f=1;
if(f==0)
printf("%d\n",x);
}
return 0;
} 
