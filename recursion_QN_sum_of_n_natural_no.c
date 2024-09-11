# include <stdio.h>

int sum_n(int n);

int main()
{
	int n;
	scanf("%d", &n);
	
	printf("sum: %d\n", sum_n(n));

	return 0;
}

int sum_n(int n)
{
	if(n == 0)
		return 0;

	else
		return n + sum_n(n-1);
}


/*
OUTPUT:	5
		sum: 15
*/