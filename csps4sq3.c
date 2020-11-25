#include<stdio.h>
int prod(int x,int y)
{
	return (x*y);
}
void main()
{
	int x=2,y=3,z;
	z=prod(x,prod(x,y));
	printf("%d",z);
}
