#include<stdio.h>
int main()
{   // int a, b;  %d for 0 values no decimal points
    // use float a,b;  %f for 0.000 values for decimal points
	
	int a, b;

	printf("Enter your 1st no. \n");
	scanf("%d", &a);

	printf("Enter your 2nd no. \n");
	scanf("%d", &b);

	printf("Your sum is %d\n", a+b);

	return 0;
}