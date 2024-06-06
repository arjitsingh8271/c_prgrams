// Sum and Average of 10 Arrays.
#include<stdio.h>
int main()
{
	int x[10],i ,sum;
    double avg;

	printf("Enter 10 values :\n");
	
	for (i = 0; i < 10; ++i)
	{
		scanf("%d", &x[i]);
	}

    sum = 0;
    for (i = 0; i < 10; i++)
    {
    	{
    		sum = sum + x[i];
    	}
    }

    printf("The sum of the arrays is : %d\n", sum);

    avg = sum/10;
    printf("The Average of the arrays is : %lf\n", avg);
    return 0;
}