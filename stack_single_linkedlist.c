#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* link;
};
struct node* top=NULL;


void push()
{
	struct node* tmp;
	tmp=(struct node*)malloc(sizeof(struct node));
	printf("Enter node data = ");
	scanf("%d",&tmp->data);
	tmp->link=top;
	top=tmp;
	printf("%d had been pushed.\n",tmp->data);
}


void pop()
{
	struct node* tmp;
	if(top==NULL)
	{
		printf("No elements to delete!!!\n");
	}
	else
	{
		tmp=top;
		printf("%d element had been deleted.\n",tmp->data);
		top=top->link;
		tmp->link=NULL;
		free(tmp);
	}
}


void peek()
{
	if(top==NULL)
	{
		printf("Stack is empty....\n");
	}
	else
	{
		printf("Peek element is %d.\n",top->data);
	}
}


void traverse()
{
	struct node* tmp;
	if(top==NULL)
	{
		printf("Stack is empty.\n");
	}
	else
	{
		printf("ELements are.....\n");
		tmp=top;
		while(tmp!=NULL)
		{
			printf("%d\n",tmp->data);
			tmp=tmp->link;
		}
	}
}


void main()
{
	int ch;
	while(1)
	{
		printf("\n\nImplementation of stack in single linked list.........\n");
		printf("1.Push\n");
	    printf("2.Pop\n");
	    printf("3.Peek\n");
	    printf("4.Traverse\n");
	    printf("5.Quit\nEnter your choice.....   : ");
	    scanf("%d",&ch);
	    switch(ch)
	    {
	    	case 1: 
			    push();
				break;
	    	case 2: 
	    	    pop();
				break;
	    	case 3: 
			    peek();
			    break;
	    	case 4:
			    traverse();
				break;
	    	case 5:
			    exit(0);
	    	default:
			    printf("Invalid input.....\n");
		}
	}	
	
}
