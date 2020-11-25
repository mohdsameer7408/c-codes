#include<stdio.h>
void main()
{
	int n;
	printf("Enter the array size = ");
	scanf("%d",&n);
	int a[n],i,loc,prev,val;
	for(i=0;i<n;i++)
	{
		printf("Enter an element at %d = ",i+1);
		scanf("%d",&a[i]);
	}
	printf("Enter a location to be deleted = ");
	scanf("%d",&loc);
	if(loc<=n)
	{
		prev=loc;
		val=a[loc-1];
		while(prev<n)
		{
			a[prev-1]=a[prev];
			prev=prev+1;
		}
		n=n-1;
		printf("Array after deleting %d is :\n",val);
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
