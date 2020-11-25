#include<stdio.h>
#define c 5

int queue[c],front=0,rear=0;

void insert()
{
	int e;
	if(c == rear)
	{
		printf("Queue is full..\n");
	}
	else
	{
		printf("Enter an element = ");
		scanf("%d",&e);
		queue[rear++]=e;
		printf("%d element had been inserted.\n",e);
	}
}


void delete()
{
	int i;
	if(front == rear)
	{
		printf("Queue is empty..\n");
	}
	else
	{
		printf("Deleted element is = %d\n",queue[front]);
		for(i=1;i<rear;i++)
		{
			queue[i-1]=queue[i];
		}
		rear--;
	}	
}


void traverse()
{
	int i;
	if(front == rear)
	{
		printf("Queue is empty");
	}
	else
	{
		printf("Queue elements are :\n");
		for(i=0;i<rear;i++)
		{
			printf("%d\n",queue[i]);
		}
		
	}
}


void main()
{
	int ch;
	while(1)
	{
		printf("\n\nQueue implementation......\n");
		printf("1. Insert,\n");
		printf("2. Delete,\n");
		printf("3. Traverse,\n");
		printf("4. Quit.\n");
		printf("Enter your choice....... : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				insert();
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
