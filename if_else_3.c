/* Else if clause
Instead of using multiple if statements, we can also use else if along with if thus
forming 
an if-else if-else ladder. */

#include<stdio.h>
int main()
{
	int num;

	printf("Enter the number\n");
	scanf("%d", &num);

	if(num==1)
	{
	  printf("Your number is 1 \n");
	}
    
    else if (num==2)
    {
      printf("Your number is 2 \n");
    }

    else if (num==3)
    {
      printf("Your number is 2 \n");
    }

    else 
    {
      printf("Its not 1, 2, or 3!\n");
    }
	
	return 0;
}