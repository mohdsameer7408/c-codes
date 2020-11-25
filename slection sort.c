#include<stdio.h>
void main()
{
	int n;
	printf("Enter the array size = ");
	scanf("%d",&n);
	int a[n],i,j,t,l,loc;
	for(i=0;i<n;i++)
	{
		printf("Enter an element at %d = ",i+1);
		scanf("%d",&a[i]);
	}
	//selection sort begins!!!.
	for(i=0;i<n-1;i++)
	{
		l=a[i];
		loc=i;
		for(j=i+1;j<n;j++)
		{
			if(l>a[j])
			{
				loc=j;
				l=a[j];
			}
		}
		t=a[i];
		a[i]=a[loc];
		a[loc]=t;
	}
	printf("Array after slelection sort is : ");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
