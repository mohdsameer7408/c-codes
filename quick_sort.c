#include<stdio.h>


void swap(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}


int partition(int a[], int low, int high)
{
	int pivot = a[high];
	int i = low-1, j;
	for(j=low;j<high;j++)
	{
		if(a[j] < pivot)
		{
			i++;
			swap(&a[i], &a[j]);
		}
	}
	swap(&a[i+1], &a[high]);
	return (i+1);
}


void quick_sort(int a[], int low, int high)
{
	if(low < high)
	{
		int pi = partition(a, low, high);
		
		quick_sort(a, low, pi-1);
		quick_sort(a, pi+1, high);
	}
}


void main()
{
	printf("\n\n ==============================================================================================================");
	printf("\n|\t\t\t\t\t    Implementaion of Quick Sort                                        |");
	printf("\n ==============================================================================================================");
	int n;
	printf("\nEnter the array size = ");
	scanf("%d",&n);
	int a[n], i;
	printf("Enter the array elements....\n");
	for(i=0;i<n;i++)
	{
		printf("Enter an element at %d = ",i+1);
		scanf("%d",&a[i]);	
	}
	quick_sort(a, 0, n-1);
	printf("Array after quick sort is : [");
	for(i=0;i<n;i++)
	{
		if(i < (n-1))
			printf("%d, ",a[i]);
		else
			printf("%d]",a[i]);
	}
}
