#include<stdio.h>

int main()
{
	int a,b,temp;
	printf("Enter Two Numbers\n");
	scanf("%d%d",&a,&b);
    printf("Input Two Number is : \n a = %d \n b = %d\n", a,b);
	temp = a;
	a = b;
	b = temp;

	printf("Swaping (a to b) & (b to a) : \n a = %d \n b = %d\n", a,b);
	return 0;
}
