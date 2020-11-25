#include<stdio.h>
void main()
{
	FILE *fp;
	char a[100],b,c[100];
	int c1=0,c2=0;
	fp = fopen("E:\\C-programs\\student_details.txt", "r");// It's not necessary to provide the complete path of the file if your c file is in the same directory.
	if(fp == NULL)
	{
		printf("File not found.");
	}
	else
	{
		while(!feof(fp))
		{
			fgets(c,100,fp);
			printf("%s",c);
		}
		printf("\n\n");
		fclose(fp);
		fp = fopen("E:\\C-programs\\student_details.txt", "r");
		while(!feof(fp))
		{
			fscanf(fp,"%s",a);
			printf("%s",a);
		}
		fclose(fp);
		printf("\n\n");
		fp = fopen("E:\\C-programs\\student_details.txt", "r");
		while((b=fgetc(fp)) != EOF)
		{
			printf("%c",b);
			if(b==' ')
			{
				c1++;
			}
			else if(b=='\n')
			{
				c2++;
				c1++;
			}
		}
		printf("There are %d words and %d new lines.",c1+1,c2);
		fclose(fp);
	}
}
/* fread() or fwrite()
Syntax-
       fread or fwrite (for array(variable to read or write) or for structure (& of that variable),sizeof(write var),
	                    no of data,file pointer);
*/
