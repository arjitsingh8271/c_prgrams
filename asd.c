/*
#include <stdio.h>
 
void main()
{
    float number, sum = 0, i;
 
    printf("enter the number: ");
    scanf("%f", &number);
    for (i = 1; i <= number; i++)
    {
        sum = sum + (1 / i);
        if (i == 1)
            printf("\n 1 +");
        else if (i == number)
            printf(" (1 / %f)", i);
        else
            printf(" (1 / %f) + ", i);
    }
    printf("The sum of the given series is %.2f \n", sum);
}
*/

/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
  int n, place, a;

  printf("Enter number of rows: ");
  scanf("%d",&n);
  
  for(int i=1; i< 2*n; i++)
  {
    a=1;
    
    if(i < n) place=i;
    else place = abs(2*n-i);
    
    for(int j=1; j<=place; j++)
    printf("0");

    printf("\n"); //next line
  }

  return 0;
}
*/

#include <stdio.h>
void main()
{   int i, j, n;
                  
                  printf("Enter the number\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i = i + 1)
                     {
                      printf("(");
                      for (j = 1; j <= i; j = j + 1)
                       {
                          printf("%d", j);
                          if (j < i)
                             printf("+");
                         else if (j = i)
                             printf(")");
        }

        if (i < n)
           printf("+");
                     else if (i = n)
                        printf(" \n");
    }
}
