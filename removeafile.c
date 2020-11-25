#include<stdio.h>
void main()
{
	if(!remove("abc.txt"))
	   printf("File had been deleted successfully.");// It's not necessary to provide the complete path of the file if your c file is in the same directory.
	else
	   printf("Error while deleting file.");
}
