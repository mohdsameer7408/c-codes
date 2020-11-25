#include<stdio.h>
int swap(int *m,int *n)
{
	int t=*m;
	*m=*n;
	*n=t;
	printf("%d%d",*m,*n);
	return 0;
}
void main()
{
	int a,b;
	printf("Enter any two numbers to swap :\n");
	scanf("%d%d",&a,&b);
	swap(&a,&b);
	printf("%d%d",a,b);
}
