// Graphs implementation!!!
#include<stdio.h>
#include<stdlib.h>
#define max_list 4


typedef struct node{
	int vertexNum;
	struct node* next;
}node;

typedef struct list{
	node* head;
}list;

list* adjlist[max_list]={0};

void addNode(int s, int v)
{
	node* src,*tmp,*dest;
	if(adjlist[s]->head==NULL)
	{
		src=(node*)malloc(sizeof(node));
		src->vertexNum=s;
		src->next=NULL;
		adjlist[s]->head=src;
	}
	dest=(node*)malloc(sizeof(node));
	dest->vertexNum=v;
	dest->next=NULL;
	tmp=adjlist[s]->head;
	while(tmp->next)
	{
		tmp=tmp->next;
	}
	tmp->next=dest;
}



void printList()
{
	int i;
	for(i=0;i<max_list;i++)
	{
		node* p=adjlist[i]->head;
		if(p)
		{
			printf("Adjescency list of the vertex %d is..... : ",i);
			while(p)
			{
				printf("%d-->",p->vertexNum);
				p=p->next;
			}
			printf("\n");
		}
	}
	printf("\n\nVertices of the graph were traversed successfully!!!");
}



void main()
{
	printf("\n\nGraph implementation...........");
	int i,s,v;
	char ch;
	for(i=0;i<max_list;i++)
	{
		adjlist[i]=(list*)malloc(sizeof(list));
		adjlist[i]->head=NULL;
	}
	do
	{
		printf("\n\nPlease enter a pair of adjescent vertices for the graph....\n");
		scanf("%d%d",&s,&v);
		addNode(s,v);
		printf("\nPress y or Y to insert a new vertex into the graph else exit by pressing any character from the keyboard : ");
		scanf(" %c",&ch);
	}while(ch=='y' || ch=='Y');
	printList();
}
