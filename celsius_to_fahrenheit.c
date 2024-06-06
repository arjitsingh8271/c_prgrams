/*Write a program to convert Celsius (Centigrade degrees temperature to
Fahrenheit*/

#include<stdio.h>
int main()
{
	float celsius, fahrenheit;
	
	printf("Value of Celsius temperature\n");
	scanf("%f", &celsius);
    
	fahrenheit = (celsius * 9/5) + 32;

    printf("The value of this Celsius temperature in Fahrenheit is %f\n", fahrenheit);
	return 0;
}