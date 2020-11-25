#include<stdio.h>
void main()
{
	int y;
	printf("Enter the year to check it as a leap year = ");
	scanf("%d",&y);
	goto leap;
	leap:if(y%4==0&&y%100!=0)
	{
		printf("%d is a leap year.\n",y);
	}
	else
	{
	    printf("%d isn't a leap year.\n",y);
    }
}
