#include <iostream>
#include <cmath>
using namespace std;

long long int merge(long long int* a,long long int low,long long int pivot,long long int high,long long int mag){
	long long int n1,n2,i,j,k,pairs=0;
	n1 = pivot-low+1;
	n2 = high-pivot;
	long long int l[n1],r[n2];
	
	for(long long int m=0;m<n1;m++)
	l[m] = a[low+m];
	for(long long int m=0;m<n2;m++)
	r[m] = a[pivot+1+m];
	
	i=0;j=0;k=low;
	while(i<n1 && j<n2){
		if(l[i]<=r[j])
		a[k++] = l[i++];
		else
		a[k++] = r[j++];
	}
	while(i<n1)
		a[k++] = l[i++];
	while(j<n2)
		a[k++] = r[j++];
		
	i=n1-1;j=n2-1;
	while(i>=0 && j>=0){
		if((r[j]-l[i])>=mag){
			cout<<"\npairs are ("<<l[i]<<","<<r[j]<<")"<<j+1;
			pairs += i+1;
			j--;
		}
		else
		i--;
	}
	
	i=n1-1;j=n2-1;
	while(i>=0 && j>=0){
		if((l[i]-r[j])>=mag){
			cout<<"\npairs are ("<<l[i]<<","<<r[j]<<")"<<i+1;
			pairs += j+1;
			i--;
		}
		else
		j--;
	}
	cout<<"\n";
	for(long long int m=0;m<n1;m++)
	cout<<l[m]<<"->";
	cout<<"\n";
	for(long long int m=0;m<n2;m++)
	cout<<r[m]<<"->";
	cout<<"\n";
	
	return pairs;
}
long long int mergesort(long long int* a,long long int low,long long int high,long long int mag){
	long long int pivot,pairs=0;
	if(high>low){
		pivot = (high+low)/2;
		pairs += mergesort(a,low,pivot,mag);
		pairs += mergesort(a,pivot+1,high,mag);
		pairs += merge(a,low,pivot,high,mag);
	}
	return pairs;
}
int main(){
	long long int n,k;
	cin>>n>>k;
	long long int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	cout<<mergesort(a,0,n-1,k);
	return 0;
}
