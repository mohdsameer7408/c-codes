#include<stdio.h>


void swap(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}


heapify(int a[], int n, int i)
{
	int largest = i;
	int l = 2*i+1;
	int r = 2*i+2;
	
	if((l < n) && (a[l] > a[largest]) )
		largest = l;
	
	if((r < n) && (a[r] > a[largest]))
		largest = r;
	
	if(largest != i)
	{
		swap(&a[i], &a[largest]);
		
		heapify(a, n, largest);
	}
}


heap_sort(int a[], int n)
{
	int i;
	for(i=(n/2)-1;i>=0;i--)
		heapify(a, n, i);
	
	for(i=n-1;i>=0;i--)
	{
		swap(&a[i], &a[0]);
		
		heapify(a, i, 0);
	}
}


void main()
{
	printf("\n\n ==============================================================================================================");
	printf("\n|\t\t\t\t\t    Implementaion of Heap Sort                                         |");
	printf("\n ==============================================================================================================");
	int n;
	printf("\nEnter the array size = ");
	scanf("%d",&n);
	int a[n], i;
	printf("Enter the array elements.....\n");
	for(i=0;i<n;i++)
	{
		printf("Enter an element at %d = ",i+1);
		scanf("%d",&a[i]);	
	}
	heap_sort(a, n);
	printf("Array after heap sort is : [");
	for(i=0;i<n;i++)
	{
		if(i < (n-1))
			printf("%d, ",a[i]);
		else
			printf("%d]",a[i]);
	}
}
