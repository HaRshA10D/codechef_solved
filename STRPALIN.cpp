#include<stdio.h>
#include<string.h>
int check(char *a,char *b,int x,int y);
int main(){
	char a[1001],b[1001];
	int x,y,t,i,c;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%s",a);
		scanf("%s",b);
		x=strlen(a);
		y=strlen(b);
		c=check(a,b,x,y);
		if(c==1)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}
int check(char *a,char *b,int x,int y){
	int i,j;
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			if(a[i]==b[j])
				return 1;
		}
	}
	return 0;
}
