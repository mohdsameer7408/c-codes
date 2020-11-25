#include<stdio.h>
int fact(int n)
{
	int i,f=1;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	return f;
}
void main()
{
int n,i,j;
float s=0;
printf("enter a limit of the series =");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	int p=1;
	for(j=1;j<=i;j++)
	{
		p=p*i;
	}
	printf("%d/%d ",p,fact(i));
	s=s+((float)p/fact(i));
}
printf("sum =%f",s);
}
