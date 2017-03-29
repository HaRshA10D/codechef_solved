#include<stdio.h>
void swap(long long int* a, long long int* b)
{
    long long int t = *a;
    *a = *b;
    *b = t;
}
long long int partition (long long int arr[], long long int low, long long int high)
{
    long long int pivot = arr[high];  
    long long int i = (low - 1),j; 
 
    for (j = low; j <= high- 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++; 
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
void quickSort(long long int arr[],long long int low,long long int high)
{
    if (low < high)
    {
        long long int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
int main()
{
    long long int c;
    scanf("%lld",&c);
    long long int a[c+1],i,h=0,v;
    for(i=0;i<c;i++)
    	scanf("%lld",&a[i]);
    quickSort(a,0,c-1);
    for(i=0;i<c;i++){
    	v=(a[i]*(c-i));
    	if(v>h)
    		h=v;
	}
	printf("%lld\n",h);
    return 0;
}
