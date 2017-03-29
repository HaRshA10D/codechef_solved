#include <iostream>
using namespace std;
int merge(int *a,int low,int mid,int high){
	int n1 = mid-low+1,n2 = high-mid;
	int i,j,k,count=0;
	int *l = new int[n1];
	int *r = new int[n2];
	
	for(i=0;i<n1;i++)
	l[i] = a[low+i];
	for(j=0;j<n2;j++)
	r[j] = a[mid+1+j];
	
	i=0;
	j=0;
	k=low;
	
	while(i<n1 && j<n2){
		if(l[i]<=r[j]){
			a[k++] = l[i++];
		}
		else{
			a[k++] = r[j++];
			count += n1-i;
		}
	}
	while(i<n1){
		a[k++] = l[i++];
	}
	while(j<n2){
		a[k++] = r[j++];
	}
	return count;
}
int mergesort(int *a,int low,int high){
	int mid,count=0;
	if(high>low){
		mid = (high+low)/2;
		count += mergesort(a,low,mid);
		count += mergesort(a,mid+1,high);
		count += merge(a,low,mid,high);
	}
	return count;
}
int main(int argv,char * argc[]){
	int n;
	cin>>n;
	int *a = new int[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<n;i++)
	a[i] = i*a[i];
	cout<<mergesort(a,0,n-1);
	return 0;
}
