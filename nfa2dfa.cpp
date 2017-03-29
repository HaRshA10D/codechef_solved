#include<stdio.h>
void printString(char *c){
	while(*c != '\0'){
		printf("%c",*c);
		c++;
	}
}
int main(){
	char c[7]="Harsha";
	printString(c);
	printf("\n%s",c);
	return 0;
}
