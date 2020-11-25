#include<stdio.h>
void main()
{
	char a,b,c;
	printf("Enter value of a = ");
	scanf("%c",&a);
	fflush(stdin);
	printf("Enter value of b = ");
	scanf("%c",&b);
	fflush(stdin);
	printf("Enter value of c = ");
	scanf("%c",&c);
	printf("%c%c%c\n",a,b,c);
}
