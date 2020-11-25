#include<stdio.h>
#include<string.h>
void main()
{
	char str[20],a;
	int i,j,l;
	printf("Enter a string to check as palindrome = ");
	scanf("%[^\n]s",&str);
	l=strlen(str);
	for(i=0;i<l;i++)
	{
		a=str[i];
	}
	j=l-1;
	char t;
	for(i=0;i<=j;i++,j--)
	{
		t=str[i];
		str[i]=str[j];
		str[j]=t;
	}
	if(strcmp(a,str)==0)
	{
	  printf("%s is a palindrome string",str);
    }
    else
      printf("%s isn't a palindrome string",str);
}
