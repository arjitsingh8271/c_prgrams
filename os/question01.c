#include <stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
	int a;
	if (fork() == 0) 
	{
		a = a + 5;
		printf("%d %d \n", a, &a);
	}
	
	else 
	{
		a = a - 5;
		printf("%d %d \n", a, &a);
	}
}