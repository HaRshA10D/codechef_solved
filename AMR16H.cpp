#include <iostream>
using namespace std;
void swap(long long int* a,long long int* b){
	long long int x=*a;
	*a=*b;
	*b=x;
}
long long int partition(long long int* a,long long int low,long long int high){
	long long int x=a[high],y,i=low-1;
	for(y=low;y<high;y++){
		if(a[y]>x){
			i++;
			swap(a+i,a+y);
		}
	}
	i++;
	swap(a+i,a+high);
	return i;
}
void quicksort(long long int* a,long long int low,long long int high){
	long long int pivot;
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
		long long int tr,total = 0;
		cin>>tr;
		long long int mul = tr;
		long long int a[tr];
		for(long long int j=0;j<tr;j++)
		cin>>a[j];
		quicksort(a,0,tr-1);
		for(long long int j=1;j<tr;j++){
			total += mul*a[j];
			cout<<mul*a[j]<<"->";
			mul--;
		}
		total += a[0];
		cout<<total<<"\n";
	}
	return 0;
}
