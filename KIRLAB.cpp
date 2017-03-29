#include<stdio.h>
int gcd(long long int x,long long int y){
	long long l=(x>y)?y:x;
	long long int i;
	for(i=2;i<=l;i++){
		if((x%i==0)&&(y%i==0))
		return 1;
	}
	return 0;
}
int main(){
	int t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		long long int n,j,x=0,c=1;
		scanf("%lld",&n);
		long long int a[100002];
		for(j=0;j<n;j++)
			scanf("%lld",&a[j]);
		int f=0;
		for(j=1;j<=n;j++){
			if(f==0){
				if(gcd(a[x],a[j])){
					x=j;
					f=1;
					c++;
				}else{
					x++;
				}
			}
			else{
				if(gcd(a[x],a[j])){
					x=j;
					c++;
				}
			}
		}
		printf("%lld\n",c);
	}
	return 0;
}
