#include<stdio.h>
#include<math.h>
int main()
{
    int i, j, num, temp, sum=0;
    printf("Enter Number\n");
    scanf("%d", &num);

    while (sum!=1 && sum!=4)
    {
    sum=0;
    while(num>0)
    {
        i=num/10;
        sum+=(i*j);
        num =num/10;
    }
    num=sum;
    }
    if (sum==1)
    {
       printf("Happy Number\n");
    }
    else
    {
        printf("Unhappy Number\n");
    }
    
}