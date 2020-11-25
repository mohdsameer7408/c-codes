#include<stdio.h>
void main()
{
	int a,b;
	printf("enter the limit");
	scanf("%d",&a);
	b=a;
	while(b>=0)
	{
		printf("%d\t",b);
		b--;
	}
}
