/*A program for differnt functions
as per the given criteria*/
#include<stdio.h>
#define pi 3.14
float area(float r)
{
	float a=pi*r*r;
	return a;
}
void main()
{
	float r,ar;
	printf("Enter the radius of the circle = ");
	scanf("%f",&r);
	ar=area(r);
	printf("%f",ar);
}
