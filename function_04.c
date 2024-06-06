// Check if a Number is a prime or not

#include<stdio.h>

int isprimenumber(int n)
{
	for (int i = 2; i < n; ++i)
	{
	   if (n % i == 0)
	   return 0;
	}
	return 1;
}

int main()
{
	int n, isprime;

	printf("Enter a number\n");
	scanf("%d", &n);

	isprime = isprimenumber(n);

	if (isprime == 1)
	{
		printf("%d is a prime number\n", n);
	}
	else
		printf("%d is not a prime number\n", n);

	return 0;
}


// Without using function
/*
#include <stdio.h>
int main()
{
	int n, flag = 0;

	printf("Enter a number\n");
	scanf("%d", &n);

	for (int i = 2; i < n / 2; ++i)
	{
		if (n % i == 0)
		{
			flag = 1;
			break;
		}
	}

	if (n == 1)
	{
		printf("i is neither prime nor composite \n");
	}
	else
	{
		if (flag == 0)
		{
			printf("%d is a prime number\n", n);
		}
		else
			printf("%d is not a prime number\n", n);
	}

	return 0;
}
*/