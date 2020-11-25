#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* link;
};
struct node* root=NULL;
int len;


int length()
{
	int c=0;
	struct node* tmp;
	tmp=root;
	if(tmp)
	{
		do
		{
			c++;
			tmp=tmp->link;
		}while(tmp != root);
	}
	return c;
}


void append()
{
	struct node* tmp;
	tmp = (struct node*)malloc(sizeof(struct node));
	printf("Enter node data = ");
	scanf("%d",&tmp->data);
	tmp->link=NULL;
	if(root==NULL)
	{
		root=tmp;
		tmp->link=root;
	}
	else
	{
		struct node* p;
		p=root;
		do
		{
			p=p->link;
		}while(p->link != root);
		p->link=tmp;
		tmp->link=root;
	}
	printf("Node had been appended to the list.\n");
}


void addatbegin()
{
	struct node* tmp;
	tmp=(struct node*)malloc(sizeof(struct node));
	printf("Enter node data = ");
	scanf("%d",&tmp->data);
	tmp->link=NULL;
	if(root == NULL)
	{
		root=tmp;
		tmp->link=root;
	}
	else
	{
		struct node* p=root;
		do
		{
			p=p->link;	
		}while(p->link != root);
		p->link=tmp;
		tmp->link=root;
		root=tmp;
	}
	printf("Node had been added to the beginning.\n");
}


void addatafter()
{
	int loc,i=1;
	struct node* tmp;
	printf("Enter the location after which you are willing to place the node = ");
	scanf("%d",&loc);
	if(loc>length())
	{
		printf("Invalid location!!!\nCurrently list is having %d nodes.",length());
	}
	else
	{
	    struct node* p=root;
		while(i<loc)
		{
			p=p->link;
			i++;
		}
		tmp=(struct node*)malloc(sizeof(struct node));
		printf("Enter node data = ");
	    scanf("%d",&tmp->data);
		tmp->link=NULL;
		tmp->link=p->link;
		p->link=tmp;
		printf("Node had been added to the list at location %d.\n",loc+1);
	}
}


void traverse()
{
	struct node* tmp;
	tmp=root;
	if(tmp == NULL)
	{
		printf("List is empty, no node to display");
	}
	else
	{
		printf("Node data is : ");
		do
		{
			printf("%d-->",tmp->data);
			tmp=tmp->link;
		}while(tmp != root);
		printf("\n\n");
	}
}


void delete()
{
	struct node* tmp;
	int loc;
	printf("Enter node location to delete = ");
	scanf("%d",&loc);
	if(loc>length())
	{
		printf("Invalid location.\n");
	}
	else if(loc == 1)
	{
		if(length())
		{
			tmp=root;
			tmp->link=NULL;
			root=NULL;
			free(tmp);
		}
		else
		{
			struct node* p=root;
			do
			{
				p=p->link;
			}while(p->link != root);
			p->link=root->link;
			tmp=root;
			root=tmp->link;
			tmp->link=NULL;
			free(tmp);
		}
		printf("Node at location %d had been deleted.\n",loc);
	}
//	else if(loc == length())
//	{
//		struct node* p=root,*q;
//		int i=1;
//		while(i<loc-1)
//		{
//			p=p->link;
//			i++;
//		}
//		q=p->link;
//		p->link=root;
//		q->link=NULL;
//		free(q);	
//	}
	else
	{
		struct node* p=root,*q;
		int i=1;
		while(i<loc-1)
		{
			p=p->link;
			i++;
		}
		q=p->link;
		p->link=q->link;
		q->link=NULL;
		free(q);
		printf("Node at location %d had been deleted.\n",loc);
	}
}


void main()
{
	int ch;
	while(1)
	{
		printf("\n\nCircularly singly linked list operations....\n");
		printf("1. Append,\n2. Add at beginning,\n3. Add at a location after which you prefer,\n4. Length,\n5. Delete,\n6. Display,\n7. Quit\nEnter choice.....  : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				append();
				break;
			case 2:
				addatbegin();
				break;
			case 3:
				addatafter();
				break;
			case 4:
				len=length();
				printf("Length = %d.\n",len);
				break;
			case 5:
				delete();
				break;
			case 6:
				traverse();
				break;
			case 7:
				exit(0);
			default: printf("Invalid choice!!!");
		}
		getch();
		system("cls");
	}
}
