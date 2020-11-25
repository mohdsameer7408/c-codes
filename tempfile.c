#include<stdio.h>
#include<string.h>
void main()
{
	FILE *tmp;
	char a[]="Hey guys.";
	int i=-1,l=strlen(a);
	tmp = tmpfile();
	if(tmp!=NULL)
	{
		printf("Temporary file had been created.\n");
		while(++i<l)
		{
			fputc(a[i],tmp);
		}
		rewind(tmp);
		while(!feof(tmp))
		{
			printf("%c",fgetc(tmp));
		}
	}
	else
	{
		printf("Failed to create the temporary file.");
	}
}
