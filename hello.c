#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter two numbers :\n");
	scanf("%d%d",&a,&b);
	if(a<b)
	   printf("Sum = %d",a+b);
    else
       printf("Difference = %d",a-b);
}

