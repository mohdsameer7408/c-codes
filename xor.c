#include<stdio.h>
void main()
{
	int n=212,i;
	for(i=0;i<=2;++i)
	printf("Right shift by %d : %d\n", i, n>>i);
	
	printf("\n");
	
	for(i=0;i<=2;++i)
	printf("Left shift by %d : %d\n", i, n<<i);
}
