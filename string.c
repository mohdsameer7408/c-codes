#include<stdio.h>
void main()
{
	char a[30];
	printf("enter your name");
	scanf("%[^\n]%*c",&a);
	printf("%s",a);
}
