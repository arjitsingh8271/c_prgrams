// printing of all 10 arrays.
#include<stdio.h>
int main()
{
	int x[10],i ,min;

	printf("Enter 10 values :\n");
	
	for (i = 0; i < 10; ++i)
	{
		scanf("%d", &x[i]);
	}

	for (i = 0; i < 10; ++i)
	{
		printf("The value of x[%d] is %d\n", i, x[i]);
	}
	return 0;
}