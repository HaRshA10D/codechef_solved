#include<stdio.h>
int lcm(int a,int b){
	int gcd,lcm,i,min;
	min=(a>b)?b:a;
	for(i=1;i<=min;i++){
		if(a%i==0 && b%i==0)
			gcd = i;
	}
	return ((a*b)/gcd);
}
int main(){
	int t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		int sensors,j,k,freezMin;
		scanf("%d",&sensors);
		long long int value[501];
		for(j=0;j<sensors;j++)
			scanf("%d",&value[j]);
		freezMin=lcm(value[0],value[1]);
		for(j=0;j<sensors;j++){
			for(k=j+1;k<sensors;k++){
				long long int x=lcm(value[j],value[k]);
				if(x<freezMin)
					freezMin=x; 
			}
		}
		printf("%d\n",freezMin);
	}
	return 0;
}
