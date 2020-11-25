#include<stdio.h>
void main()
{
	int i,j,k,w,l,n;
	printf("Enter the rows size = ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(!(i%2))
		{
			for(k=1;k<=n-i;k++)
			{
				printf(" ");
			}
			for(j=i;j>1;j--)
			{
				printf("*");
			}
			for(w=1;w<=i;w++)
			{
				printf("*");
			}
		}
		else
		{
			for(l=0;l<n-1;l++)
			{
				printf(" ");
			}
			printf("*");
		}
		printf("\n");
	}
}
