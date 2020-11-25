#include<stdio.h>
int pow(int x,int y)
{
	if(y==0)
	{
		return 1;
	}
	else
	  return(x*pow(x,y-1));
}
void main()
{
	int x,y;
	printf("Enter the value of x and y to find x^y : \n");
	scanf("%d%d",&x,&y);
	printf("X^y = %d",pow(x,y));
}
