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
	int n,facto;
	printf("Enter a number to print its factorial = ");
	scanf("%d",&n);
	facto=fact(n);
	printf("Factorial of %d = %d",n,facto);
}
