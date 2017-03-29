
            
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

long long int cal(long long int* a,long long int l,long long int h,long long int k){
	long long int c=0;
	while(l<=h)
	{
    	if(a[l]+a[h]>=k)
        h--;
    	else
    	{
        	c=c+(h-l);
        	l++;
		}             
	}
	return c;
}
int main(){
	int t,c,f;
	cin>>t;
	for(int i=0;i<t;i++){
		long long int n,tot;
		cin>>n;
		long long int a[n];
		for(long long int j=0;j<n;j++)
		cin>>a[j];
		sort(a,a+n);
		for(long long int j=0;j<n;j++){
			tot+=cal(a,j+1,n-1,a[j]);
		}
		cout<<(n*(n-1)*(n-2))/6-tot<<"\n";
	}
	return 0;
}
