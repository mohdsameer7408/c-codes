#include<stdio.h>
void main()
{
	char a,b,c;
	for(a='A';a<='T';a++)
	{
		for(c=a;c<='T';c++)
		{
			printf(" ");
		}
		for(b='A';b<=a;b++)
		{
			printf("%c ",a);
		}
		printf("\n");
	}
	for(a='S';a>='A';a--)
	{
		for(c=a;c<='T';c++)
		{
			printf(" ");
		}
		for(b='A';b<=a;b++)
		{
			printf("%c ",a);
		}
		printf("\n");
	}
}
