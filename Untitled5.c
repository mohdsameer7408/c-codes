#include<stdio.h>
void main()
{
	char x = '2', b = '1', c = '-';
	int a = (int)x-48;
	printf("%d\n",a);
	char d = (char)(a+48);
	printf("%c",d); 
}
