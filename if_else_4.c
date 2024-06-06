/* Conditional operators
A shorthand “if-else” can be written using conditional or ternary operators.
Condition ? expression-if-true ; expression-if-false
Here, '?' and ':' are Ternary operators. */

#include<stdio.h>
int main()
{
	int a;
	
	printf("Enter a \n");
	scanf("%d", &a);

    // if else statement in one line
	
	(a<5) ? printf("a is less than 5\n") : printf("a is greter than 5\n");
	
	return 0;
}