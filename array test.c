#include<stdio.h>
#include<stdlib.h>

struct node
{
	int a;
	struct node* link;
};

void main()
{
	system("cls");
	struct node* t;
	t = (struct node*)malloc(sizeof(struct node));
	if(t==NULL)
		printf("Out of space");
	else
		printf("%u",t);	
}
