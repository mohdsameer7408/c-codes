//A program to print the series (1!/3! + 5!/7! + 9!/11! + ....... + (n-2)!/n! and display its sum.
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
	int n,i;float s=0;
	printf("Enter a limit for the series = ");
	scanf("%d",&n);
	printf("The series is :");
	for(i=1;i<=n;i++)
	{
		printf("%d!/%d! ",(4*i-3),(4*i-1));
		s+=((float)fact(4*i-3)/fact(4*i-1));
	}
	printf("\nSum of the above series is = %f",s);
}
