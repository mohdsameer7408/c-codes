#include<stdio.h>
void main()
{
	int i,j,k,w;
	for(i=1;i<=5;i++)
	{
		for(k=1;k<=5-i;k++)
		{
			printf(" ");
		}
		for(j=i;j>1;j--)
		{
			printf("%d",j);
		}
		for(w=1;w<=i;w++)
		{
			printf("%d",w);
		}
		printf("\n");
	}
}
