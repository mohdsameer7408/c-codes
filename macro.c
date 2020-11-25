#include<stdio.h>
#include<math.h>
#define pi 3.14
void main()
{
	float r;
	printf("Enter the radius = ");
	scanf("%f",&r);
	float a=pi*(pow(r,2));
	printf("Area = %f",a);
}
