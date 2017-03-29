#include <iostream>
using namespace std;

int main(){
	long long int n,cur=0,nestingDepth=0,maxpos=1,length=0,maxlen=0,maxlenpos=1,start=1;
	int b;
	cin>>n;
	for(long long int i=0;i<n;i++){
		cin>>b;
		if(b==1){
		    cur++;
			length++; 
			if(cur>nestingDepth){
				nestingDepth=cur;
				maxpos=i+1;
			}
		}else if(b==2){
			cur--;
			length++;
			if(cur==0){
				if(length>maxlen){
					maxlen=length;
					maxlenpos=start;
				} 
				length=0;
				start=i+2;
			}
		}
	}
	cout<<nestingDepth<<" "<<maxpos<<" "<<maxlen<<" "<<maxlenpos<<"\n";
	return 0;
}
