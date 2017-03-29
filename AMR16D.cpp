#include <iostream>
using namespace std;
int main(){
	int t,tot,pos;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>tot>>pos;
		if((pos-1)/3 == pos/3)
		cout<<"yes"<<"\n";
		else
		cout<<"no"<<"\n";
	}
	return 0;
}
