#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* left;
	struct node* right;
};
struct node* root=NULL;
int len;

void append()
{
	struct node* tmp;
	tmp=(struct node*)malloc(sizeof(struct node));
	printf("Enter node data = ");
	scanf("%d",&tmp->data);
	tmp->left=NULL;
	tmp->right=NULL;
	if(root==NULL)
	{
		root=tmp;
	}
	else
	{
		struct node* p;
		p=root;
		while(p->right!=NULL)
		{
			p=p->right;
		}
		p->right=tmp;
		tmp->left=p;
	}
	printf("%d appended successfully.\n",tmp->data);
}


void addatbegin()
{
	struct node* tmp;
	tmp=(struct node*)malloc(sizeof(struct node));
	printf("Enter the node data = ");
	scanf("%d",&tmp->data);
	tmp->left=NULL;
	tmp->right=NULL;
	if(root==NULL)
	{
		root=tmp;
	}
	else
	{
		tmp->right=root;
		root->left=tmp;
		root=tmp;
	}
	printf("%d added at the beginning successfully.\n",tmp->data);
}


int length()
{
	int c=0;
	struct node* tmp=root;
	while(tmp!=NULL)
	{
		c++;
		tmp=tmp->right;
	}
	return c;
}


void traverse()
{
	struct node* tmp=root;
	if(tmp==NULL)
	{
		printf("Node is empty, no elements to display.\n");
	}
	else
	{
	    printf("Node elements are.........\n");
	    while(tmp!=NULL)
	    {
		    printf("%d-->",tmp->data);
		    tmp=tmp->right;
	    }
	}
}


void addatafter()
{
	int loc,l,i=1;
	struct node* tmp;
	printf("Enter a location after which you preffer to add a new node = ");
	scanf("%d",&loc);
	l=length();
	if(loc>l)
	{
		printf("Invalid location.\n");
		printf("List conatins only %d nodes.\n",l);
	}
	else
	{
		tmp=(struct node*)malloc(sizeof(struct node));
		printf("Enter node data = ");
		scanf("%d",&tmp->data);
		tmp->left=NULL;
		tmp->right=NULL;
		struct node* p=root;
		while(i<loc)
		{
			p=p->right;
			i++;
		}
		tmp->right=p->right;
		p->right->left=tmp;
		tmp->left=p;
		p->right=tmp;
		printf("Node had been connected successfully.\n");
	}
}


void delete()
{
	int loc,l,i=1;
	struct node* tmp;
	printf("Enter a location which you are willing to delete = ");
	scanf("%d",&loc);
	l=length();
	if(loc>l)
	{
		printf("Invalid location, the list contains only %d nodes.\n",l);
	}
	else if(loc==1)
	{
		tmp=root;
		root=tmp->right;
		tmp->right->left=NULL;
		tmp->right=NULL;
		free(tmp);
		printf("Node at %d location had been deleted successfully.\n",loc);
	}
	else
	{
		struct node* p=root,*q;
		while(i<(loc-1))
		{
			p=p->right;
			i++;
		}
		q=p->right;
		q->right->left=p;
		p->right=q->right;
		q->right=NULL;
		q->left=NULL;
		free(q);
		printf("Node at %d location had been deleted successfully.\n",loc);
	}
}


void swap()
{
	int loc,i=1;
	struct node* tmp=root,*p,*q;
	printf("Enter a location to swap two adjescent nodes = ");
	scanf("%d",&loc);
	while(i<(loc-1))
	{
		tmp=tmp->right;
		i++;
	}
	p=tmp->right;
	q=p->right;
	// Swapping beigns!!!
	p->right=q->right;
	q->right->left=p;
	q->right=p;
	p->left=q;
	tmp->right=q;
	q->left=tmp;
	printf("Swapping completed successfully!!!\n");
}


void reverse()
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
			q=q->right;
			k++;
		}
		tmp=p->data;
		p->data=q->data;
		q->data=tmp;
		i++;
		j--;
		p=p->right;
		q=root;
	}
	printf("List had been reversed successfully!!!\n");
}


void main()
{
	int ch;
	while(1)
	{
		printf("\n\nDouble linked list operations....\n");
		printf("1. Append,\n2. Add at beginning,\n3. Add at a location after which you prefer,\n4. Length,\n5. Display,\n6. Delete,\n7. Swap two Adjescent nodes,\n8. Reverse,\n9. Quit\nEnter choice.....  : ");
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
				reverse();
				break;
			case 9:
				exit(0);
			default: printf("Invalid choice!!!");
		}
		getch();
		system("cls");
	}	
}
