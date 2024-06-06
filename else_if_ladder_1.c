/* Program to find out the grade of a student
   when the marks of 5 subject are given.
   The method od assigning grade is as-
   per>=85               grade=A
   per<85  and  per>=70  grade=B
   per<70  and  per>=55  grade=C
   per<55  and  per>=40  grade=D
   per<40                grade=E
*/

#include<stdio.h>
int main()
{
	int m1,m2,m3,m4,m5,total;
	float per;
	char grade;

	printf("Enter marks of 5 subject:\n");
	scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
	total=m1+m2+m3+m4+m5;
	per=total/5;

	if(per>=85)
		grade='A';
	else if (per>=70)
		grade='B';
	else if (per>=55)
		grade='C';
	else if (per>=40)
		grade='D';
	else
		grade='E';
	if (per>=40)
		printf("Result: PASS\n");

	printf("Total is: %d/500 \nPercentage is: %f%%\nGrade is: %c\n",total,per,grade);

    return 0;
}