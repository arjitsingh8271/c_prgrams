/* Switch case-control instruction
Switch-case is used when we have to make a choice between the number of
alternatives for a given variable. */

#include<stdio.h>
int main()
{
	int age, a;

	printf("Enter your age\n");
	scanf("%d", &age);
    
	
	switch(age)
    {
		
    	case 7:
    	printf("You are a child\n");
    	break;

    	case 12:
    	printf("You are a child\n");
    	break;

    	case 18:
    	printf("You are adult\n");
    	break;

    	case 25:
    	printf("You are young\n");
    	break;

    	case 65:
    	printf("You are old\n");
    	break;

    	case 95:
    	printf("You are too old\n");
    	break;

    	default :
    	printf("Invaild input\n");
    	break;
    }
    

    return 0;
}