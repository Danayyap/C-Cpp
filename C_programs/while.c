#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
	printf("HELLO \n");
	while(1)

	{
		int *ptr = malloc(sizeof(int) *10);
		printf(" in while\n");
		sleep(1);
	}
	return 1;
}
