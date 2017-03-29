#include<stdio.h>
void swap(int* a,int* b){
	int x=*a;
	*a=*b;
	*b=x;
}
int partition(int* a,int low,int high){
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
void quicksort(int* a,int low,int high){
	int pivot;
	if(high>low){
		pivot=partition(a,low,high);
		quicksort(a,low,pivot-1);
		quicksort(a,pivot+1,high);
	}
}
void main(){
	int n,a[100],i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",a+i);
	quicksort(a,0,n-1);
	for(i=0;i<n;i++)
	printf("%d-->",*(a+i));
}
