#include<stdio.h>
int main()
{
	int sum,n,i,m;
	printf("Enter Table of a Number\n");
	scanf("%d",&m);
	printf("Up to\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	   sum=m*i;
	   printf(" %dx%d=%d\n",m,i,sum);
	}

	return 0;
}