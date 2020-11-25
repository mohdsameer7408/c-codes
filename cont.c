#include<stdio.h>
void main()
{
	int i=1;
	while(i<=10)
	{
		if(i==5)
		{
			continue;
		}
		printf("%d\n",i);
		i++;
	}
	
	int a = 5;
	char b = a;
	printf("%c", b);
	
}
