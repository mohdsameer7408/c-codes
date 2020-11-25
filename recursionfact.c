#include<stdio.h>
int fact(int n)
{
	if(n==1)
	 return 1;
	else
	 return(n*fact(n-1));
}
void main()
{
	int n;
	printf("Enter a number to print its factorial = ");
	scanf("%d",&n);
	printf("Factorial of %d is %d",n,fact(n));
}
