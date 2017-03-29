#include <iostream>
using namespace std;
int main(){
	enum{quit,left,right,pick,drop};
	long long int n,h,p=0;
	cin>>n>>h;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	int o,oc=0;
	do{
		cin>>o;
		switch(o){
			case left:
				if(p>0)
				p--;
				break;
			case right:
				if(p<(n-1))
				p++;
				break;
			case pick:
				if(a[p]>0 && oc==0){
					oc=1;
					a[p]--;
				}
				break;
			case drop:
				if(a[p]<h && oc==1){
					oc=0;
					a[p]++;	
				}
				break;
		}
	}while(o!=0);
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
	return 0;
}
