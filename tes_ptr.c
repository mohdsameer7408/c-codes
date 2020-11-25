#include<stdio.h>
void main()
{
	int a1[]={1,2,3,4}, a2[]={5,6,7}, a3[]={8,9,0};
	int* x[]={a1,a2,a3};
	printf("%d, ",x[0][2]);
	printf("%d, ",*x[2]);
	printf("%d, ",*++x[0]);
	printf("%d, ",*(x)[0]);
	printf("%d, ",(x+1)[-1][+1]);
}
