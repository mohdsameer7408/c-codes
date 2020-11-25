#include<stdio.h>
void main()
{
	FILE *fp;
	fp = fopen("E:\\C-programs\\student_details.txt", "w+");// It's not necessary to provide the complete path of the file if your c file is in the same directory.
	int n,i;
	printf("How many students data are you willing to feed = ");
	scanf("%d",&n);
	struct student
	{
		char name[30];
		long long int rno;
		char c[10];
		char b[10];
	};
	struct student st[n];
	for(i=0;i<n;i++)
	{
		printf("\n\nEnter the details of student number %d :",i+1);
		printf("\n");
		fprintf(fp,"Details of student %d are :\n",i+1);
		fflush(stdin);
		printf("Enter the name of the student = ");
		scanf("%[^\n]s",st[i].name);
		fprintf(fp,"Name = %s\n",st[i].name);
		fflush(stdin);
		printf("Enter the roll number = ");
		scanf("%lld",&st[i].rno);
		fprintf(fp,"Roll_Number = %lld\n",st[i].rno);
		fflush(stdin);
		printf("Enter the course = ");
		scanf("%s",st[i].c);
		fprintf(fp,"Course = %s\n",st[i].c);
		fflush(stdin);
		printf("Enter the branch = ");
		scanf("%s",st[i].b);
		fprintf(fp,"Branch = %s\n\n",st[i].b);
	}
	fclose(fp);
}
