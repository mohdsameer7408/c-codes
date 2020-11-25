#include<stdio.h>
void main()
{
	FILE *fp = fopen(__FILE__, "r");
	char ch;
	do{
		ch = fgetc(fp);
		fputchar(ch);
	}while(!feof(fp));
	fclose(fp);
}
