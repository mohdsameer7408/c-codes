#include<stdio.h>
void main()
{
	int a=10;
	loop:do{
		if(a==15)
		{
			a+=1;
			goto loop;
		}
		printf("value of a = %d\n",a);
		a++;
	}while(a<20);
}
