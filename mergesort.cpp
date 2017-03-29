#include <iostream>
using namespace std;
void merge(int *a,int low,int mid,int high){
	int n1 = mid-low+1,n2 = high-mid;
	int i,j,k;
	int *l = new int[n1];
	int *r = new int[n2];
	
	for(i=0;i<n1;i++)
	l[i] = a[low+i];
	for(i=0;i<n2;i++)
	r[i] = a[mid+1+i];
	
	i=0;
	j=0;
	k=low;
	while(i<n1 && j<n2){
		if(l[i]<=r[j]){
			a[k++] = l[i++];
		}
		else{
			a[k++] = r[j++];
			
		}
	}
	while(i<n1){
		a[k++] = l[i++];
	}
	while(j<n2){
		a[k++] = r[j++];
	}
}
void mergesort(int *a,int low,int high){
	int mid;
	if(high>low){
		mid = (high+low)/2;
		mergesort(a,low,mid);
		mergesort(a,mid+1,high);
		merge(a,low,mid,high);
	}
}
int main(int argv,char * argc[]){
	int n;
	cin>>n;
	int *a = new int[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	mergesort(a,0,n-1);
	for(int i=0;i<n;i++)
	cout<<a[i]<<"->";
	return 0;
}
