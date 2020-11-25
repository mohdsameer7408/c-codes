#include<stdio.h>
void main()
{
	int n;
	printf("Enter the array size = ");
	scanf("%d",&n);
	int a[n],i,num,pos,flag=0,first=0,last=n-1,mid;
	for(i=0;i<n;i++)
	{
		printf("Enter an element at %d = ",i+1);
		scanf("%d",&a[i]);
	}
	printf("Enter an element to be searched = ");
	scanf("%d",&num);
	while(first<=last)
	{
		mid=(first+last)/2;
		if(num==a[mid])
		{
			flag=1;
			pos=mid;
			break;
		}
		else if(num<a[mid])
		{
			last=mid-1;
		}
		else if(num>a[mid])
		{
			first=mid+1;
		}
	}
	if(flag>0)
	{
		printf("%d found at position %d.",num,pos+1);
	}
	else
	{
		printf("%d is beyond array range.",num);
	}
}
