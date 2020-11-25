#include<stdio.h>
int fib(int n)
{
	if(n==0)
	  return 0;
	else if(n==1)
	  return 1;
	else
	  return(fib(n-1)+fib(n-2));
}
void main()
{
	int n,i;
	printf("Enter a limit for the fibonacci series = ");
	scanf("%d",&n);
	printf("Fibonacci series is : ");
	for(i=0;i<=n;i++)
	 printf("%d ",fib(i));
}
