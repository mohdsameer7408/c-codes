#include<stdio.h>
#include<string.h>
void main()
{
	char a[10];
	printf("Enter your name = ");
	scanf("%[^\n]s",&a);
	int i,j,k,n;
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		for(k=0;k<n-i;k++)
		{
			printf(" ");
		}
		for(j=0;j<=i;j++)
		{
			printf("%c ",a[i]);
		}
		printf("\n");
	}
	for(i=n-2;i>=0;i--)
	{
		for(k=0;k<n-i;k++)
		{
			printf(" ");
		}
		for(j=0;j<=i;j++)
		{
			printf("%c ",a[i]);
		}
		printf("\n");
	}
}
