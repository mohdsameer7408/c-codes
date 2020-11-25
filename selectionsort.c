#include<stdio.h>
void main()
{
	int n;
	printf("Enter the array size = ");
	scanf("%d",&n);
	int a[n],i,j,t,low,loc;
	printf("Enter the array elements :\n");
	for(i=0;i<n;i++)
	{
		printf("Enter an element at %d = ",i+1);
		scanf("%d",&a[i]);
	}
	system("cls");
	printf("Array elements are :\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}

	for(i=0;i<n-1;i++)
	{
		low=a[i];
		loc=i;
		for(j=i+1;j<n;j++)
		{
			if(low>a[j])
			{
				loc=j;
				low=a[j];
			}
		}
		t=a[i];
		a[i]=a[loc];
		a[loc]=t;
	}
	printf("Array after sorting is :\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
