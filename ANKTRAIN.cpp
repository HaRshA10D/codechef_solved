#include<stdio.h>
int main(){
	char b[][3]={"SL","LB","MB","UB","LB","MB","UB","SU"};
	int t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		int c,o;
		scanf("%d",&c);
		o=c%8;
		if(o==0)
		printf("%d%s\n",c-1,b[0]);
		else if(o<4)
		printf("%d%s\n",c+3,b[o+3]);
		else if(o<7)
		printf("%d%s\n",c-3,b[o-3]);
		else
		printf("%d%s\n",c+1,b[7]);
	}
	return 0;
}
