/* To find the factorial of a number (<34) entered through the keyboard using while loop.
*/

#include<stdio.h>

int main()
{
	int n,i=1,fact=1;
	printf("Enter a number to find its factorial: \n");
	scanf("%d",&n);

	if(n<34)
	{
		while(i<=n)
		{
			fact = fact * i;
			i++;
		}

		printf("%d! is %d\n", n,fact);
	}

	else
		printf("See the question again.\n");

	return 0; 
}