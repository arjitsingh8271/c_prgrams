/* C Program to find the greatest of three number using pointer 

   Explanation :

   1. Create three integer variables to store the user input values. Create one integer variable largestNo to hold the largest of the three numbers.
   2. Create three integer pointer variables. Assign the address of the variables to these pointer variables. These pointer variables are holding the address of the three integer variables.
   3. Ask the user to enter the first, second and third numbers. Store these numbers using the pointer variables. Actually, it is storing these values in the variables firstNo, secondNo and thirdNo. The program is using the pointer variables to store them.
   4. Use one if-else block to find out the largest number. The if block is checking if the first number is greater than the second number or not.
   5. If the first number is greater than the second number, find if the third number is greater than the first number or not. Update the largestNo variable accordingly.
   6. If the first number is less than the second number, update the largest number variable similarly.
   7. Finally, print the largest number variable i.e. largestNo.



*/

/*
# include <stdio.h>
int  main( )
{
int  a, b, c ;
int  *p1, *p2, *p3 ;
printf(" Enter the first number : ") ;
scanf("%d ",& a) ;
printf("\n Enter the second number : ") ;
scanf("%d ",& b) ;
printf("\n Enter the third number : ") ;
scanf("%d ",& c) ;

p1 = &a ;
p2 = &b ;
p3 = &c ;

if((  *p1> = *p2) & & (  *p1> = *p3))
printf("\n The Greatest Number is : %d ",*p1) ;
else
{
if((  *p2> = *p1) & & (  *p2> = *p3))
printf("\n The Greatest Number is : %d ",*p2) ;
else
printf("\n The Greatest Number is : %d ",*p3) ;
}
return ( 0 );
}

*/
#include <stdio.h>
int main()
{
    int num1, num2, num3;
    int *p1, *p2, *p3;

    //taking input from user
    printf("Enter First Number: ");
    scanf("%d",&num1);
    printf("Enter Second Number: ");
    scanf("%d",&num2);
    printf("Enter Third Number: ");
    scanf("%d",&num3);

    //assigning the address of input numbers to pointers
    p1 = &num1;
    p2 = &num2;
    p3 = &num3;
    if(*p1 > *p2)
    {
	if(*p1 > *p3)
	{
		printf("%d is the largest number\n", *p1);
	}
	else
	{
		printf("%d is the largest number\n", *p3);
	}
    }
    else
    {
	if(*p2 > *p3)
	{
		printf("%d is the largest number\n", *p2);
	}
	else
	{
		printf("%d is the largest number\n", *p3);
	}
    }
    return 0;
}