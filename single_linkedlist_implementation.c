#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* link;
};
struct node* root=NULL;
int len;


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
	}
	else
	{
		struct node* p;
		p=root;
		while (p->link != NULL)
		{
			p=p->link;
		}
		p->link=tmp;
	}
	printf("Node had been appended to the list.\n");
}


int length()
{
	int c=0;
	struct node* tmp;
	tmp=root;
	while(tmp!=NULL)
	{
		c++;
		tmp=tmp->link;
	}
	return c;
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
	}
	else
	{
		tmp->link=root;
		root=tmp;
	}
	printf("Node had been added to the beginning.\n");
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
		while(tmp!=NULL)
		{
			printf("%d-->",tmp->data);
			tmp=tmp->link;
		}
		printf("\n\n");
	}
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
		printf("Node had been addded to the list at location %d.\n",loc);
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
		tmp=root;
		root=tmp->link;
		tmp->link=NULL;
		free(tmp);
		printf("Node at location %d had been deleted.\n",loc);
	}
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


void swap()
{
	int i=1,loc;
	printf("Enter a location to swap two adjescent nodes = ");
	scanf("%d",&loc);
	struct node* tmp=root,*q,*r;
	while(i<loc-1)
	{
		tmp=tmp->link;
		i++;
	}
	q=tmp->link;
	r=q->link;
	// Swapping begins!!!
	q->link=r->link;
	r->link=q;
	tmp->link=r;
	printf("Swapping completed!!!\n");
}


void reverseData()
{
	int i,j,l,k,tmp;
	struct node *p=root,*q=root;
	l=length();
	i=0;
	j=l-1;
	while(i<j)
	{
		k=0;
		while(k<j)
		{
			q=q->link;
			k++;
		}
		tmp=p->data;
		p->data=q->data;
		q->data=tmp;
		i++;
		j--;
		p=p->link;
		q=root;
	}
	printf("List data had been reversed successfully!!!\n");
}


void reverseNode()
{
	struct node* prev=NULL, *curr=root, *next=NULL;
	while(curr)
	{
		next=curr->link;
		curr->link=prev;
		prev=curr;
		curr=next;
	}
	root=prev;
	printf("Nodes of the list had been reversed successfully!!!\n");
}


void main()
{
	int ch;
	while(1)
	{
		printf("\n\nSingle linked list operations....\n");
		printf("1. Append,\n2. Add at beginning,\n3. Add at a location where you prefer,\n4. Length,\n5. Display,\n6. Delete,\n7. Swap two Adjescent nodes,\n8. Reverse data,\n9. Reverse node,\n10. Quit\nEnter choice.....  : ");
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
				traverse();
				break;
			case 6:
				delete();
				break;
			case 7:
				swap();
				break;
			case 8:
				reverseData();
				break;
			case 9:
				reverseNode();
				break;
			case 10:
				exit(0);
			default: printf("Invalid choice!!!");
		}
		getch();
		system("cls");
	}
}
