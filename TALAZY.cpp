#include<iostream>
using namespace std;
class jem{
	long long int sums,btime,mtime,total;
	public:
		jem(int,int,int,int);
		int dosum();
		void display();
		
};
jem::jem(int s,int b,int m,int t){
	sums=s;
	btime=b;
	mtime=m;
	total=t;
}
void jem::display(){
	cout<<total<<"\n";
}
int jem::dosum(){
	if(sums%2==0){
		total+=((sums/2)*mtime)+btime;
		sums=(sums/2);
		mtime=2*mtime;
		return 1;
	}else if(sums==1){
		total+=mtime;
		return 0;
	}else{
		total+=(((sums+1)/2)*mtime)+btime;
		sums=((sums-1)/2);
		mtime=2*mtime;
		return 1;
	}
}
int main(){
	int t,p;
	jem set(0,0,0,0);
	cin>>t;
	for(int i=0;i<t;i++){
		long int s,b,m,t=0;
		cin>>s>>b>>m;
		new (&set) jem(s,b,m,0);
		while(set.dosum()){}
		set.display();
	}
}









