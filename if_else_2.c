// if else statement, '&&' (and) operator

#include<stdio.h>
int main()
{
	int age;
	printf("Enter your age \n");
	scanf("%d", &age);

	if (age>=18 && age<=40)
	{
		printf("Your are Elegible for College\n");
	}

	else
	{
		printf("Your Not Elegible for College\n");
	}

return 0;

}