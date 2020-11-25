#include<stdio.h>
#include<string.h>
void main()
{
	char ch[50],i,c1=0,c2=0,l;
	printf("Enter any text = ");
	scanf("%[^\n]s",&ch);
	l=strlen(ch);
	if(ch[0]==' ')
	  i=1;
	for( ;i<l;i++)
	{
		if(ch[i]!=' ')
		{
			c1++;
		}
		else
		{
			c2++;
		}
	}
	printf("The entered text is : ");
	puts(ch);
	printf("The entered text has %d characters, and %d words.",c1,c2+1);
}
