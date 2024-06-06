/* Write a program to find out whether a student is pass or fail; if it requires a total
of 40% and at least 33% in maths, english and 23% in physics, chemistry, physical eduacation 
subject to pass. Assume 5 subjects and take marks as an input from the user. */


#include<stdio.h>
int main()
{
	int english, physics, chemistry, maths, physical_education ;
	float total;

	printf("Enter your marks in english\n");
	scanf("%d", &english);

	printf("Enter your marks in physics\n");
	scanf("%d", &physics);

	printf("Enter your marks in chemistry\n");
	scanf("%d", &chemistry);

	printf("Enter your marks in maths\n");
	scanf("%d", &maths);

	printf("Enter your marks in physical education\n");
	scanf("%d", &physical_education);

	total = (english + physics + chemistry + maths + physical_education)/5;

	if((total<40) || (english<33) || (physics<23) || (chemistry<23) || (maths<33) ||(physical_education<23))
	{
		printf("Your total percentage is %f and You are fail\n", total);
	}
 
    else
    {
    	printf("Your total percentage is %f and You are pass\n", total);
	
    }

	return 0;
}