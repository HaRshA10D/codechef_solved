#include <iostream>
using namespace std;
int main(){
	long int k,s,sg,fg,d,t;
	cin>>k;
	for(int i=0;i<k;i++){
		cin>>s>>sg>>fg>>d>>t;
		float x = ((float(d)*180)/float(t)) + float(s),a,b;
		a=(x>sg?x-sg:sg-x);
		b=(x>fg?x-fg:fg-x);
		if(a>b) cout<<"FATHER"<<"\n";
		else if(a==b) cout<<"DRAW"<<"\n";
		else cout<<"SEBI"<<"\n";
	}
	return 0;
}
