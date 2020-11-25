#include<stdio.h>
void main()
{
	FILE *fp;
	fp = fopen("xyz.txt", "r");
	while(!feof(fp))
	{
		printf("%c",fgetc(fp));
	}
	printf("\n");
	rewind(fp);
	while(!feof(fp))
	{
		printf("%c",fgetc(fp));
	}
}
