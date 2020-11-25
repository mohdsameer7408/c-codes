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
	int n,i,m;
	printf("Enter a limit for the series = ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    	m=fib(i);
    	printf("%d , ",m);
	}
}
