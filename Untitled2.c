#include<stdio.h>
#include<string.h>
void main()
{
	char a[]="hey there";
	int l=strlen(a)-1,i=0;
	char b[l+1];
	while(a[l])
	{
		b[i++]=a[l--];
	}
	b[i]='\0';
	printf("%s",b);
	i=0;
	while(b[i])
	{
		a[i]=b[i];
		i++;
	}
	a[i]='\0';
	printf("\n%s",a);
}
