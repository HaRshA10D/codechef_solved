#include <iostream>
using namespace std;

int min(long long int* a,long long int x,long long int n){
	long long int m,tmp;
	if(x>=(n-1)) return 0;
	m = a[x+1] + min(a,x+1,n);
	if((x+2)<n){
		tmp = a[x+2] + min(a,x+2,n);
		if(m>tmp)
			m=tmp;
	}
	if((x+3)<n){
		tmp = a[x+3] + min(a,x+3,n);
		if(m>tmp)
			m=tmp;
	}
	return m;
}
int main(){
	long long int n;
	cin>>n;
	long long int a[n];
	for(long int i=0;i<n;i++)
	cin>>a[i];
	cout<<min(a,-1,n)<<"\n";
	return 0;
}
