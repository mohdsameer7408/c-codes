#include<stdio.h>
void main()
{
	int n;
	printf("Enter the array size = ");
	scanf("%d",&n);
	int a[n],i,loc,insval,prev;
	for(i=0;i<n;i++)
	{
		printf("Enter an element at %d = ",i+1);
		scanf("%d",&a[i]);
	}
	printf("Enter a location where you are willing to insert a value = ");
	scanf("%d",&loc);
	if(loc<=n)
	{
		printf("Enter a value to be inserted = ");
	    scanf("%d",&insval);
		prev=n;
		while(prev>=loc)
		{
			a[prev]=a[prev-1];
			prev=prev-1;
		}
		a[prev]=insval;
		n=n+1;
		printf("Array after inserting value %d is :\n",insval);
		for(i=0;i<n;i++)
		{
			printf("%d\n",a[i]);
		}
	}
	else
	{
		printf("%d location is beyond array range.",loc);
	}
}
