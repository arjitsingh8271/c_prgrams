#include <stdio.h>

void Display();  // Function Prototype

int main()
{
	printf("First line to Print\n");    
	Display();   // Function Call
	printf("Third line to Print\n");
}

void Display()  // Function Definition
{
	printf("Second line to Print\n");   
}