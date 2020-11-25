#include<stdio.h>

void main()
{
	int x,y;
	int ar[3][3];
	
	
	for( x=0;x<=2;x++)
	{
		for( y=0;y<=2;y++)
		{
			scanf("%d",&ar[x][y]);
		}
	}
			
	for( x=0;x<=2;x++)
	{
		for( y=0;y<=2;y++)
		{
			if(x+y==2s)
			{
				printf("%d",ar[x][y]);
			}
		}
		printf("\n");
	}
}
