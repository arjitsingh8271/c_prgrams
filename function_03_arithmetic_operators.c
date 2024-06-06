/*
#include <stdio.h>

int sum(int a, int b);
int sub(int a, int b);

int sum(int a, int b)
{   printf("Enter two numbers for Addition\n");
    scanf("%d %d", &a,&b);
	printf("The value of (%d + %d) is: %d\n", a,b,a+b );
	return 0;
}

int main()
{   int a, b;
	sum(a, b);
	sub(a, b);
}

int sub(int a, int b)
{   printf("Enter two numbers for Substraction\n");
    scanf("%d %d", &a,&b);
	printf("The value of (%d - %d) is: %d\n", a,b,a-b );
	return 0;
}
*/
//           OR

#include<stdio.h>

int sum(int a,int b);

int main()
{
	int a,b,c;
	printf("Enter two numbers for Addition\n");
    scanf("%d %d", &a,&b);
    c = sum(a,b);
	printf("The value of (%d + %d) is: %d\n", a,b,c );
	return 0;
}

int sum(int a,int b)
{
	int result;
	result = a+b;
	return result;
}