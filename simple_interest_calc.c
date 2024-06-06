/* c program to calculate simple interest for a set of values representing
principle, no of years, and rate of interest. */

#include <stdio.h>
int main()
{
	float principal,rate,year,SimpleInterest;

	printf("Enter the Principal\n");
	scanf("%f", &principal);
    
    printf("Enter the Rate\n");
	scanf("%f", &rate);
    
    printf("Enter the Year\n");
	scanf("%f", &year);
    
	SimpleInterest = (principal * rate * year) / 100;
    
	printf("The Simple Interest is %f\n", SimpleInterest);

    return 0;
}