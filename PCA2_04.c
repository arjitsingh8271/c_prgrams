/* C program to print all twin primes in a given range of numbers using array.

   Explanation :

   Given an integer n. we need to print all twin prime number pairs between 1 to n.
   A Twin prime are those numbers which are prime and having a difference of two ( 2 ) between the two prime numbers.
   In other words, a twin prime is a prime that has a prime gap of two.
   Sometimes the term twin prime is used for a pair of twin primes;
   an alternative name for this is prime twin or prime pair.
   Usually, the pair (2, 3) is not considered to be a pair of twin primes. Since 2 is the only even prime,
   this pair is the only pair of prime numbers that differ by one;
   thus twin primes are as closely spaced as possible for any other two primes.
   The first few twin prime pairs are :

   (3, 5), (5, 7), (11, 13), (17, 19), (29, 31), 
   (41, 43), (59, 61), (71, 73), (101, 103), 
   (107, 109), (137, 139), …etc.

*/


#include<stdio.h> // include stdio.h library
int check_prime(int n);

int main(void)
{   

    int start, end;

    printf("Enter start: ");
    scanf("%d", &start);

    printf("Enter end: ");
    scanf("%d", &end);

    for(int i = start; i < end; i++)
    {
        if(check_prime(i) && check_prime(i + 2))
        {            
            printf("{%d, %d}\n", i, i + 2);
            i = i + 1; 
        }                
    }    

    return 0; // return 0 to operating system
}

int check_prime(int n)
{
    if(n == 1)
    {
        return 0;
    }

    for(int i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            // number is not prime
            return 0;
        }
    }

    // number is prime
    return 1;
}