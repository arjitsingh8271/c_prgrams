// Program to find greatest number from three given numbers

#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter three numbers: \n");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		printf("%d is the greatest number \n", a);
	        else
                printf("%d is the greatest number \n", c);
	}	
	else
	{
		if(b>c)
		printf("%d is the greatest number \n", b);
		else
		printf("%d is the greatest number \n", c);
	}

	return 0;
}

