#include <iostream>
#define MAX 100000
using namespace std;

int main(){
	int t,c,f;
	cin>>t;
	for(int i=0;i<t;i++){
		char a[MAX];
		cin>>a;
		long long int x=0;
		c=0;
		f=0;
		while(a[x]!='\0'){
			if(a[x]=='*')
			c=2;
			else
			c--;
			if(c==-1){
				cout<<"NO"<<"\n";
				f=1;
				break;	
			}
			x++;
		}
		if(f==0)
		cout<<"YES"<<"\n";
	}
	return 0;
}
