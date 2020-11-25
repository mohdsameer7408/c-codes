#include<stdio.h>
main()
{
	int ctr,num[5]={1,2,3,4,5};
	int *a;
	a=&num[0];
	printf("%d",a);
	for(ctr=0;ctr<5;ctr++)
	{
		printf("%d",a[ctr]);
		printf("%d",*(a+ctr));
	}
}
