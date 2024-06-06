// Qn. Print sum of the series: 1+3+5+...n

#include<stdio.h>

int main()
{
	int num, i, sum=0;

	printf("enter the numbers of terms: ");
	scanf("%d", &num);

	// if(num % 2 == 0)
	// {
	// 	printf("This is series of an odd number, so please enter an odd number.\n");
	// 	return 0;
	// }

	// else
	// {
		for(i=1 ; i<=num ; i++)
		{
			sum = sum+(2*i-1); 
			printf("%d \n",sum);
		}
	
	//printf("%d \n",sum);

	return 0;
}