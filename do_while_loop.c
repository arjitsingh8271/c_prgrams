#include <stdio.h>
int main()
{
    int a;

    printf("enter a number \n");
    scanf("%d", &a);

    do
    {
        printf("%d\n", a); 
        a++;
    } while (a < 10);

    return 0;
}