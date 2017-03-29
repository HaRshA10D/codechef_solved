#include<stdio.h>
int main(){
	long long int t,tot=0,i,j;
	scanf("%lld",&t);
	int a[t];
	for(i=0;i<t;i++){
		scanf("%d",&a[i]);
		for(j=i-1;j>-1;j--){
			if(a[i]>a[j])
				tot+=a[i]-a[j];
			else if(a[j]>a[i])
				tot+=a[j]-a[i];
		}
	}
	printf("%lld",tot);
	return 0;
}
