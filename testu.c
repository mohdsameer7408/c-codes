#include<stdio.h>
void main()
{
	int n,i;
	printf("Enter the size of array = ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter a number at %d= ",i+1);
	    scanf("%d",&a[i]);
	}
	int g=a[0];
	printf("Numbers are :");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(g>a[i])
		  g=a[i];
	}
	printf("The smallest number = %d",g);
}
