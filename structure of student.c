#include<stdio.h>
void main()
{
	int n;
	printf("Enter a limit for students = ");
	scanf("%d",&n);
	struct student
	{
		char name[30];
		int roll;
		float c;
		float m;
		float l;
	};
	struct student st[n];
	int i;
	for(i=0;i<n;i++)
	{
		printf("Enter your name = ");
		scanf(" %[^\n]s",st[i].name);
		printf("Enter your roll number = ");
		scanf("%d",&st[i].roll);
		printf("Enter your marks in c programming = ");
		scanf("%f",&st[i].c);
		printf("Enter your marks in maths = ");
		scanf("%f",&st[i].m);
		printf("Enter your marks in linux = ");
		scanf("%f",&st[i].l);
	}
	printf("Sno. Name          Roll No.        C            Maths           Linux\n");
	for(i=0;i<n;i++)
	{
		printf("%d    %s             %d          %f    %f       %f     \n",i+1,st[i].name,st[i].roll,st[i].c,st[i].m,st[i].l);
	}
}
