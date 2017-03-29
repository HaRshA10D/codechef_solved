#include <iostream>
using namespace std;

long long int min(long long int a,long long int b,long long int c){
	long long int m;
	m=a;
	if(m>b)
		m=b;
	if(m>c)
		m=c;
	return m;
}
long long int dp(long long int a[][5],long long int n){
	a[0][0]=0;
	
	a[n-3][1]=a[n-2][0];
	a[n-3][2]=a[n-1][0];
	a[n-3][3]=a[n][0];
	a[n-3][4]= a[n-3][0] + min(a[n-2][0],a[n-1][0],a[n][0]);
	
	for(long long int i=(n-4);i>=0;i--){
		a[i][3]=a[i+1][2];
		a[i][2]=a[i+1][1];
		a[i][1]=a[i+1][4];
		
		a[i][4]=a[i][0]+ min(a[i][2],a[i][3],a[i][1]); 
	}
	return a[0][4];
}
int main(){
	long long int n,min,t1,t2,t;
	cin>>n;
	long long int c[n][5],b[n][5];
	
	for(long long int i=1;i<=n;i++){
		cin>>t;
		if(i!=n)
		b[i][0]=t;
		if(i!=1)
		c[i-1][0]=t;
	}
	
	t1=b[1][0]+dp(c,n);
	t2=c[n-1][0]+dp(b,n);
	if(t1>t2) cout<<t2<<"\n";
	else cout<<t1<<"\n";
	
	return 0;
}
