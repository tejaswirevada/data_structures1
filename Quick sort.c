#include <stdio.h>
int partition(int a[],int low,int high);
//Swap code:
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
//quicksort code:
void quicksort(int a[],int low,int high)
{
	if(low<high)
	{
		int location=partition(a,low,high);
		quicksort(a,low,location-1);
		quicksort(a,location+1,high);
	}
}
//partition code:
int partition(int a[],int low,int high)
{
	int pivot=a[low];
	int start=low;
	int end=high;
	while(start<end)
	{
		while(a[start]<=pivot)
		{
		start++;
	
	}
	while(a[end]>pivot)
	{
		end--;
	}
	if(start<end)
	{
		swap(&a[start],&a[end]);
	}
	}
	swap(&a[low],&a[end]);
	return end;
}
	int main()
	{
		int n,i;
		printf("Enter n size:");
		scanf("%d",&n);
		int a[n];
		printf("\nEnter %d elements:",n);
	    for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		quicksort(a,0,n-1);
		printf("\nAfter sorting:");
		for(i=0;i<n;i++)
		{
			printf("\t%d",a[i]);
		}
		return 0;
	}
