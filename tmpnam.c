#include<stdio.h>
void main()
{
	char n[L_tmpnam+1];
	tmpnam(n);
	printf("%s",n);
}
