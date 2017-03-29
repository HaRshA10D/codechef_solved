#include <iostream>
using namespace std;

void swap(long long int* a,long long int* b){
	int x=*a;
	*a=*b;
	*b=x;
}
long long int partition(long long int* a,long long int low,long long int high){
	int x=a[high],y,i=low-1;
	for(y=low;y<high;y++){
		if(a[y]<x){
			i++;
			swap(a+i,a+y);
		}
	}
	i++;
	swap(a+i,a+high);
	return i;
}
void quicksort(long long int* a,long long int low,long long int high){
	long long pivot;
	if(high>low){
		pivot=partition(a,low,high);
		quicksort(a,low,pivot-1);
		quicksort(a,pivot+1,high);
	}
}
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		long long int n;
		cin>>n;
		long long int a[n];
		for(int j=0;j<n;j++)
		cin>>a[j];
		quicksort(a,0,n-1);
		for(int j=0;j<n;j++){
			if(j==(n-1)){
				cout<<a[j]<<"\n";
				break;
			}
			if(a[j]!=a[j+1]){
				cout<<a[j]<<"\n";
				break;
			}
			j++;
		}
	}
	return 0;
}
