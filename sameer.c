#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
main(){
	char ch;
	struct node *start=NULL,*end,*temp,*ptr;
	do{
		temp=end;
		end=(struct node*)malloc(sizeof(struct node));
		printf("Enter a number : ");
		scanf("%d",&end->data);
		end->next = NULL;
		if(start == NULL){
			start = end;
		}
		else
		{
			temp->next=end;
		}
		printf("Enter y or Y to continue : ");
		scanf(" %c",&ch);
	}while(ch=='y' || ch=='Y');
	ptr=start;
	while(ptr!=NULL){
		printf("%d",ptr->data);
		ptr=ptr->next;
	}
}
