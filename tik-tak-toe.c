#include<stdio.h>
#include<stdlib.h>

char player_1[20];
char player_2[20];
char arr[3][3];
int c;

void clear_matrix();
void display_start();
void store_data(char);
void get_player_name();
void print_matrix();
void core_program();
void display_result();


void main()
{
	int i=1,chance;
	c=0;
	char repeat_game='z';
	loop:do
	{
		clear_matrix();
		display_start();
		get_player_name();
		for(chance=1;chance<=9;chance++)
		{
			if((chance%2)!=0)
			{
			   print_matrix();
			   store_data('0');
			   core_program();
			   if(c==1)
			   {
			   	print_matrix();
			   	display_result(player_1);
			   	break;
			   }
			}
			else
			{
			   print_matrix();
			   store_data('X');
			   core_program();
			   if(c==1)
			   {
			   	print_matrix();
			   	display_result(player_2);
			   	break;
			   }
			}
		}
		
		printf("Do you want to continue playing : Y/N ");
		scanf("\n %c",&repeat_game);
		if(repeat_game=='Y'||repeat_game=='y')
		{
			system("cls");
			goto loop;
		}
		else if(repeat_game=='N'||repeat_game=='n')
		{
			printf("Game has exited.");
			break;
		}
		else
		{
			printf("You entered wrong character.");
		}
	}while(repeat_game!='N'&&repeat_game!='n');
}
void display_start()
{
	printf("\n\t\t\t\t WELCOME TO TIC - TAK - TOE \n");
	printf("--------------------------------------------------------------------------------------------\n");
	printf("\t\t\t\t\t 1 | 2 | 3\n");
	printf("\t\t\t\t\t ----------\n");
	printf("\t\t\t\t\t 4 | 5 | 6\n");
	printf("\t\t\t\t\t ----------\n");
    printf("\t\t\t\t\t 7 | 8 | 9\n");
    printf("--------------------------------------------------------------------------------------------\n");
}
void clear_matrix()
{
	int i,j;
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			arr[i][j]='-';
		}
	}
}
void get_player_name()
{
	printf("\nEnter the name of Player 1 : ");
	scanf(" %[^\n]s",player_1);
	printf("\nEnter the name of Player 2 : ");
	scanf(" %[^\n]s",player_2);
	printf("\n");
}
void print_matrix()
{
	printf("\t\t %c | %c | %c\n",arr[0][0],arr[0][1],arr[0][2]);
	printf("\t\t ----------\n");
	printf("\t\t %c | %c | %c\n",arr[1][0],arr[1][1],arr[1][2]);
	printf("\t\t ----------\n");
	printf("\t\t %c | %c | %c\n",arr[2][0],arr[2][1],arr[2][2]);
}
void store_data(char ch)
{
	int num;
	if(ch=='0')
	{
		printf("\n%s your turn.",player_1);
	}
	if(ch=='X')
	{
		printf("\n%s your turn.",player_2);
	}
	printf("\nWhere you want to enter : ");
	scanf("%d",&num);
	if(num==1)
	   arr[0][0]=ch;
	if(num==2)
	   arr[0][1]=ch;
	if(num==3)
	   arr[0][2]=ch;
	if(num==4)
	   arr[1][0]=ch;
	if(num==5)
	   arr[1][1]=ch;
	if(num==6)
	   arr[1][2]=ch;
	if(num==7)
	   arr[2][0]=ch;
	if(num==8)
	   arr[2][1]=ch;
	if(num==9)
	   arr[2][2]=ch;
}
void core_program()
{
	if((arr[0][0]==arr[0][1])&&(arr[0][0]==arr[0][2]) || (arr[0][0]==arr[1][0])&&(arr[0][0]==arr[2][0]) || 
	   (arr[0][0]==arr[1][1])&&(arr[0][0]==arr[2][2]))
	   {
	   	if(((arr[0][0])!='-' && (arr[0][1])!='-' && (arr[0][2])!='-') || ((arr[0][0])!='-' && (arr[1][0])!='-' && (arr[2][0])!='-') 
		    || ((arr[0][0])!='-' && (arr[1][1])!='-' && (arr[2][2])!='-'))
		    {
	        	c=1;
	        }
	   }
	if((arr[2][0]==arr[2][1])&&(arr[2][0]==arr[2][2]) || (arr[2][0]==arr[1][1])&&(arr[2][0]==arr[0][2]))
	{
		if(((arr[2][0])!='-' && (arr[2][1])!='-' && (arr[2][2])!='-') || ((arr[2][0])!='-' && (arr[1][1])!='-' && 
		     (arr[0][2])!='-'))
		{
	    	c=1;
	    }
	}
	if((arr[0][2]==arr[1][2])&&(arr[0][2]==arr[2][2]))
	{
		if((arr[0][2])!='-' && (arr[1][2])!='-' && (arr[2][2])!='-')
		{
		   c=1;
	    }
	}
	if((arr[1][1]==arr[1][0])&&(arr[1][1]==arr[1][2]) || (arr[1][1]==arr[0][1])&&(arr[1][1]==arr[2][1]))
	{
		if(((arr[1][1])!='-' && (arr[1][0])!='-' && (arr[1][2])!='-') || ((arr[1][1])!='-' && (arr[0][1])!='-' && (arr[2][1])!='-'))
		{
	     	c=1;
	    }
	}
}
void display_result(char name[20])
{
	printf("Game Over");
	printf("\n%s has won!!!!!!!!!!!\n",name);
}
