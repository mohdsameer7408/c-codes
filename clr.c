#include<stdio.h>
void main(int argc, char* argv[])
{
	int i;
	printf("Elements are = ");
	for(i=1;i<argc;i++)
	{
		printf("%s",argv[i]);
	}
}
