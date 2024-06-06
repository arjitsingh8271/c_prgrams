/*
#include <stdio.h>
int main()
{
    int a;
    printf("enter a number \n");
   scanf("%d", &a);
   while (a<10)
   {  
      
      printf("%d\n", a);
      a++;
   }
   

   return 0;
} */

#include <stdio.h>
int main()
{
   int wt;
   
   printf("Enter your weight \n");
   scanf("%d", &wt);
   
   while (wt>65)
   {
      printf("Go, Exercise\n");
      printf("then come back.\n");
      printf("Enter your weight \n");
      scanf("%d", &wt);
   }
   if (wt<=65)
   {
      printf("you are fit\n");
   }
   
   return 0;
}