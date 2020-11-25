#include<stdio.h>
void main()
{
	char fn[30];
	FILE *fp,*fw;
	char ch;
	printf("Enter the file location = ");
	scanf("%[^\n]s",fn);
	fp=fopen(fn,"r");
	fw=fopen("D:\\text2.txt","w");// It's not necessary to provide the complete path of the file if your c file is in the same directory.
	if(fp==NULL)
	{
		printf("File not found");
	}
	while((ch=fgetc(fp))!=EOF)
	{
		fputc(ch,fw);
	}
	printf("File had been copied.");
}
