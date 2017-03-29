#include <iostream>
#include <cmath>
using namespace std;
void swap(long long int* a,long long int* b){
	long long int x=*a;
	*a=*b;
	*b=x;
}
int partition(long long int* a,long long int low,long long int high){
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
int supporter(long long int x){
	long long int divisors=0;
	for (int i=1; i<=sqrt(x)+1; i++)
    {
        if (x%i==0){
            if (x/i == i) divisors++;
            else divisors+=2;
        }
    }
	if(divisors==1 || divisors==2) return 0;
	for(long long int i=2;i<=sqrt(divisors);i++){
		if(divisors%i==0) return 0;
	}
	return 1;
}
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		long long int n;
		int flag=0;
		cin>>n;
		long long int *a = new long long int[n];
		for(long long int i=0;i<n;i++)
		cin>>a[i];
		quicksort(a,0,n-1);
		for(long long int i=0;i<n;i++){
			if(supporter(a[i])){
				cout<<i+1<<" ";
				flag=1;
			}
		}
		if(flag==0)
		cout<<"No supporter found.";
		cout<<"\n";
	}
	return 0;
}
