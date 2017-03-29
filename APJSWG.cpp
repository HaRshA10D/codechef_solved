#include <iostream>
using namespace std;

int main(){
	int t,c,f;
	cin>>t;
	for(int i=0;i<t;i++){
		long long int n,c,x=0,count=0;
		cin>>n;
		long long int a[n];
		for(long long int j=0;j<n;j++){
			cin>>a[j];
			if(a[j]-j-1>2)
			x=1;
			for(long long int k=0;k<j;k++){
				if(a[k]>a[j])
				count++;
			}
		}
		if(x==0)
		cout<<count<<"\n";
		else
		cout<<"Not Allowed"<<"\n";
	}
	return 0;
}
