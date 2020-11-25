#include<stdio.h>
void main()
{
	int e;
	char a[20]= "hey guys.";
	FILE *fp;
	fp = fopen("xyz.txt", "r");
	if(fp == NULL)
	{
		printf("File not found.");
	}
	else
	{
		fprintf(fp,"%s",a);
		e=ferror(fp);
		printf("%d\n",e);
		clearerr(fp);
		e=ferror(fp);
		printf("%d\n",e);
		if(!e)
		{
			printf("No error found.");
		}
		else
		{
			printf("Read only.");
		}
	}
}
