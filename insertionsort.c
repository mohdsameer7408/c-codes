#include<stdio.h>
void main()
{
	static int i=1;
	printf("%02d-Hello Coders\n",i);
	i++;
	if(i<=17)
	{
		main();
	}
	printf("\a");
}
