// if else statement, '==' (equal) operator
// c program to check whether a number is even or odd 

#include<stdio.h>
int main()
{
	int a;

	printf("Enter a number \n");
	scanf("%d", &a);

	if (a%2==0)
	{
		printf("%d is a even number\n", a);
	}

	else
	{
		printf("%d is a odd number\n", a);
	}

    return 0;
}