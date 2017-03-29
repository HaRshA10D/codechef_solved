#include <iostream>
using namespace std;

int main(){
	int t,c,f;
	cin>>t;
	for(int i=0;i<t;i++){
		long long int n,tot=0,c,x;
		cin>>n;
		long long int a[n];
		for(long long int j=0;j<n;j++){
			while(1){
			cin>>a[j];
			x=a[j];
			c=x/100;
			tot+=c;
			x=x-c*100;
			if(x==0)
			break;
			c=x/50;
			tot+=c;
			x=x-c*50;
			if(x==0)
			break;
			c=x/20;
			tot+=c;
			x=x-c*20;
			if(x==0)
			break;
			c=x/10;
			tot+=c;
			x=x-c*10;
			if(x==0)
			break;
			c=x/5;
			tot+=c;
			x=x-c*5;
			if(x==0)
			break;
			c=x/3;
			tot+=c;
			x=x-c*3;
			if(x==0)
			break;
			c=x/2;
			tot+=c;
			x=x-c*2;
			if(x==0)
			break;
			tot+=x;
			break;	
			}
		}
		cout<<tot<<"\n";
		
	}
	return 0;
}
