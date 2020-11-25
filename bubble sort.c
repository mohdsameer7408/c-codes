#include<stdio.h>
void main()
{
	int n;
	printf("Enter a limit for the array = ");
	scanf("%d",&n);
	int a[n],i,j,t;
	for(i=0;i<n;i++)
	{
		printf("Enter an element at %d = ",i+1);
		scanf("%d",&a[i]);
	}
	//bubble sort begins!!!.
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	printf("Array after sorting is :");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
