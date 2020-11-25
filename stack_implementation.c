#include<stdio.h>
#define c 5
int top=-1,stack[c];


int isFull()
{
	if(top==(c-1))
	{
		return 1;
	}
	else
	    return 0;
}


void push(int e)
{
	if(isFull())
	{
		printf("Stack is overflowed.\n");
	}
	else
	{
		stack[++top]=e;
		printf("%d had been pushed to the stack.\n",e);
	}
	
}


int isEmpty()
{
	if(top==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


int pop()
{
	if(isEmpty())
	{
	    printf("Stack is empty.\n");		
	}
	else
	{
		return stack[top--];
	}
}


void peek()
{
	if(isEmpty())
	{
		printf("Stack is empty.\n");
	}
	else
	{
		printf("Peek element is = %d.\n",stack[top]);
	}
}


void traverse()
{
	int i;
	if(isEmpty())
	{
		printf("No elements.\n");
	}
	else
	{
		printf("Stack elements are :\n");
		for(i=0;i<=top;i++)
		{
			printf("%d\n",stack[i]);
		}
	}
}


void main()
{
	int e,ch,item;
	while(1)
	{
		printf("\n\n");
		printf("1.Push\n");
	    printf("2.Pop\n");
	    printf("3.Peek\n");
	    printf("4.Traverse\n");
	    printf("5.Quit\nEnter your choice.....   : ");
	    scanf("%d",&ch);
	    switch(ch)
	    {
	    	case 1: 
	    	    printf("Enter an element to push into the stack = ");
		        scanf("%d",&e);
			    push(e);
				break;
	    	case 2: 
			    item=pop();
			    if(item == 0)
				{
					printf("Stack is underflow.\n");
				}
				else
				{
				    printf("Popped item is = %d.\n",item); 
			    }
				break;
	    	case 3: peek(); break;
	    	case 4: traverse(); break;
	    	case 5: exit(0);
	    	default: printf("Invalid input.....\n");
		}
	}
	
}
