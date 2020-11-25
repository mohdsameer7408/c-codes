#include<stdio.h>
void main()
{
	int i,n;
	printf("Enter the number of employees = ");
	scanf("%d",&n);
	struct time
	{
		int hr;
		int min;
		int sec;
	};
	struct person
	{
		int cno;
		struct time t;
	};
	struct person p[n];
	for(i=0;i<n;i++)
	{
		printf("Enter your car number = ");
		scanf("%d",&p[i].cno);
		printf("Enter the time when you entered the office in (hr/min/sec) = \n");
		scanf("%d%d%d",&p[i].t.hr,&p[i].t.min,&p[i].t.sec);
	}
	printf("Employee details are as follows :\n"); 
	printf("Sno.  Car No.      Time\n");
	for(i=0;i<n;i++)
	{
		printf("%d      %d        %d:%d:%d\n",i+1,p[i].cno,p[i].t.hr,p[i].t.min,p[i].t.sec);
	}
}
