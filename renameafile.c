#include<stdio.h>
void main()
{
	if(!rename("xyz.txt","abc.txt"))// It's not necessary to provide the complete path of the file if your c file is in the same directory.
	{
		printf("File renamed successfully.");
	}
	else
	    printf("Error in renaming the file.");
}
