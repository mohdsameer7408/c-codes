#include<stdio.h>
#include<stdlib.h>
void main()
{
	struct employee
	{
		char n[30];
		char id[10];
		char br[5];
	};
	struct employee *emp;
	emp=(struct employee*)malloc(sizeof(struct employee));
	if(emp==NULL)
	{
		printf("Out of memory space.");
	}
	else
	{
		printf("Enter your data!!!\n");
		printf("Enter your name = ");
		scanf("%[^\n]s",emp->n);
		printf("Enter your identification number = ");
		scanf("% [^\n]s",emp->id);
		printf("Enter your barnch = ");
		fscanf(emp->br,5,stdin);
	}
}
