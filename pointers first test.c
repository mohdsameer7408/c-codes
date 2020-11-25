#include<stdio.h>
void main()
{
	int age=18;
	int *p_age=&age;
	printf("%d",*p_age);
	age=20;
	*p_age=41;
	printf("%d",p_age);
}
