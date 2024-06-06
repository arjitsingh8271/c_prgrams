/*C program to check number is perfect square or not.*/
 

#include <math.h>
#include <stdio.h>
int main()
{
    int num;
    int iVar;
    float fVar;
  
    printf("Enter an integer number: ");
    scanf("%d",&num);
  
    fVar=sqrt((double)num);
    iVar=fVar;
 
    if(iVar==fVar)
        printf("%d is a perfect square.",num);
    else
        printf("%d is not a perfect square.",num);
      
    return 0;
}

/*
#include <stdio.h>
int main()
{   // variable declaration
    int i, number;

    // take user input
    printf("Enter a number: ");
    scanf("%d", &number);

    // loop to check number is perfect square or not
    for (i = 0; i <= number; i++)
    {
        if (number == i * i)
        {
            printf("%d is a perfect square\n", number);
            return 0;
        }
    }

    printf("%d is not a perfect square\n", number);
    return 0;
}
*/