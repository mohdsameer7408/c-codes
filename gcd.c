#include<stdio.h>
int calc(int x, int y)
{
	if(x==y)
	   return 1;
	else if(x>y)
	   return(calc(x-y,y));
	else
	   return(calc(x,y-x));
}
void main()
{
	int x,y,z;
	printf("Enter values of x, and y :\n");
	scanf("%d%d",&x,&y);
	z=x*y;
	calc(x,y);
	printf("HCF = %d",x);
	printf("LCM = %d",z/x);
}
