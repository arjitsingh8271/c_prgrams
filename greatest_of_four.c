#include<stdio.h>
int main()
{
	int a, b, c, d;

	printf("Enter a Number \n");
	scanf("%d",&a);

    printf("Enter b Number \n");
	scanf("%d", &b);

    printf("Enter c Number \n");
	scanf("%d", &c);
	
	printf("Enter d Number \n");
	scanf("%d", &d);

	if ((a>b) && (a>c) && (a>d))
	{
	   printf("%d is greatest of four no. \n", a);
	} 
	
	else if ((b>a) && (b>c) && (b>d))
	{
		printf("%d is greatest of four no. \n", b);
	}
   
    else if ((c>a) && (c>b) && (c>d))
	{
		printf("%d is greatest of four no. \n", c);
	}
	
	else if ((d>a) && (d>b) && (d>c))
	{
		printf("%d is greatest of four no. \n", d);
	}
   return 0;
}