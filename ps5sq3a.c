#include<stdio.h>
void main()
{
	int arr[]={1,2,3,4,5},i,k=3;
	for(i=0;i<10;i++)
	{
		*(arr+i)=i;
	}
	printf("\n%d",*arr[+k-1]);
}
