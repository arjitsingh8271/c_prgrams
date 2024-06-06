// the macros getchar() and putcher() cne be used for charater i/o. 
// getchar() reads a single charater from the standard input. 
// putcher() output one character at a time to standard output.

#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a charater: ");
	ch = getchar();
	printf("The enter charater is: ");
        putchar(ch);     // (ch\n) is not used here
	putchar('\n');

	return 0;
}

