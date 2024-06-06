/*
Write a program in C to find n C r of a given number using recursion

The algorithm used in this program is nCr = n! /((n-r)!r!).
Here we need to find all the possible combination of the value n and r.
A combination is one or more elements selected from a set without regard to the order.
The “without regard” means that the collection matters rather than order in combinations, 
so in the above example, the fact we ABC, ACB, BAC, BCA, CAB, CBA… for combinations, 
these are all 1 combinationof letters A, B and C.
*/

#include <stdio.h>
 
int fact(int);
 
int main()
{
 int n,r,ncr;
 
  	printf("Enter a number n: ");
  	scanf("%d",&n);
 printf("Enter a number r: ");
  	scanf("%d",&r);
  	ncr=fact(n)/(fact(n-r)*fact(r));
    printf("Value of %dC%d = %d\n",n,r,ncr);
}
 
int fact(int num)
{
    if(num == 1 || num == 0)  
        return 1;
    else  
        return (num * fact(num-1));
}