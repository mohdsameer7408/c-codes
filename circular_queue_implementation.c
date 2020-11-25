#include<stdio.h>
#define c 5

int front=-1,rear=-1,queue[c];

void insert(int e)
{
	if((c==rear+1 && front==0) || (front==rear+1))
	{
		printf("Queue is full!!!\n");
	}
	else if(front==-1 && rear==-1)
	{
		front=rear=0;
		queue[rear]=e;
		printf("%d had been inserted successfully!!!\n",e);
	}
	else if(rear==c-1 && front>0)
	{
		rear=0;
		queue[rear]=e;
		printf("%d had been inserted successfully!!!\n",e);
	}
	else
	{
		queue[++rear]=e;
		printf("%d had been inserted successfully!!!\n",e);
	}
}


void delete()
{
	if(front==-1 && rear==-1)
	{
		printf("Queue is empty!!!\n");
	}
	else if(front==rear)
	{
		printf("%d had been deleted.\n",queue[front]);
		front=rear=-1;
	}
	else if(front==c-1)
	{
		printf("%d had been deleted.\n",queue[front]);
		front=0;
	}
	else
	{
		printf("%d had been deleted.\n",queue[front]);
		front++;
	}
}


void traverse()
{
	int i;
	if(front==-1 && rear==-1)
	{
		printf("No elements to display!!!\n");
	}
	else if(front>0 && rear<front)
	{
		printf("Queue elements are.....\n");
		for(i=0;i<=rear;i++)
		{
			printf("%d\n",queue[i]);
		}
		for(i=front;i<c;i++)
		{
			printf("%d\n",queue[i]);
		}
	}
	else
	{
		printf("Queue elements are.....\n");
		for(i=front;i<=rear;i++)
		{
			printf("%d\n",queue[i]);
		}
	}
}


void main()
{
	int ch,e;
	while(1)
	{
		printf("\n\nCircular queue implementation......\n");
		printf("1. Insert,\n");
		printf("2. Delete,\n");
		printf("3. Traverse,\n");
		printf("4. Quit.\n");
		printf("Enter your choice....... : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter an element to insert into the stack = ");
				scanf("%d",&e);
				insert(e);
				break;
			case 2:
				delete();
				break;
			case 3:
				traverse();
				break;
			case 4:
				exit(0);
			default:
				printf("Invalid choice!!!");
		}
	}	
}
