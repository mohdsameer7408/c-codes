#include<stdio.h>
void main()
{
	int n;
	printf("Enter the array size = ");
	scanf("%d",&n);
	int a[n],i,j,t;
	for(i=0;i<n;i++)
	{
		printf("Enter an element at %d = ",i+1);
		scanf("%d",&a[i]);
	}
	//insertion sort begins!!!!.
	for(i=1;i<n;i++)
	{
		t=a[i];
		j=i-1;
		while((t<a[j])&&(j>=0))
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=t;
	}
	printf("Array after insertion sort is : ");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
