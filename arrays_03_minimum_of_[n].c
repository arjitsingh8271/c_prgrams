// The minimum of 10 arrays.
#include<stdio.h>
int main()
{
	int x[10],i ,min;

	printf("Enter 10 values :\n");
	
	for (i = 0; i < 10; ++i)
	{
		scanf("%d", &x[i]);
	}

    min = 99999;

    for (i = 0; i < 10; i++)
    {
    	if (x[i]<99999)
    	{
    		min = x[i];
    	}
    }

    printf("Minimum is %d\n", min );

	return 0;
}