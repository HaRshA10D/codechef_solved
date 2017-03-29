#include <iostream>
using namespace std;
int merge(int *a,int low,int mid,int high,int lim){
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
		}
	}
	while(i<n1){
		a[k++] = l[i++];
	}
	while(j<n2){
		a[k++] = r[j++];
	}
	
	for(i=0;i<n1;i++){
		for(j=0;j<n2;j++){
			if(l[i]+r[j]<lim)
			count++;
			else
			break;
		}
	}
	
	
	return count;
}
int mergesort(int *a,int low,int high,int lim){
	int mid,count=0;
	if(high>low){
		mid = (high+low)/2;
		count += mergesort(a,low,mid,lim);
		count += mergesort(a,mid+1,high,lim);
		count += merge(a,low,mid,high,lim);
	}
	return count;
}
int main(int argv,char * argc[]){
	int n,lim;
	cin>>n>>lim;
	int *a = new int[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	cout<<mergesort(a,0,n-1,lim)<<"\n";
	return 0;
}
