#include <stdio.h>

void Good_Morning();                   // Function Prototype
void Good_Afternoon();
void Good_Night();

int main()
{
	Good_Morning();                    // Function Call
	Good_Afternoon();
	Good_Night();
}

void Good_Night()                       // Function Definition
{
	printf("Hi Arjit Good_Night\n");
}

void Good_Afternoon()
{
	printf("Hi Arjit Good_Afternoon\n");
}

void Good_Morning()
{
	printf("Hi Arjit Good_Morning\n");
}