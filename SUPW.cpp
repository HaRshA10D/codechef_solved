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
int main(){
	long long int n;
	cin>>n;
	long long int a[n+1][5];
	a[0][0]=0;
	for(long long int i=1;i<=n;i++)
	cin>>a[i][0];
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
	/*for(int i=0;i<n+1;i++){
		cout<<i<<"-->";
		for(int j=0;j<5;j++){
			cout<<"|"<<a[i][j]<<"|";
		}
		cout<<"\n";
	}*/
	cout<<a[0][4]<<"\n";
	return 0;
}
