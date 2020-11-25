#include <stdio.h>
int main()
{
	static int i=1;
	if(i<11)
	{
		printf("%d. Hello\n",i);
		i++;
		main();
	}
	return 0;
}
