/* A program that reads a charater from keyboard and then prints it in reverse case.
That is, if the input is upper case, the ouput will be lower cas and vice versa. */

#include <stdio.h>
#include <ctype.h>
int main()
{

    char alphabet;
    printf("Enter an alphabet\n");
    //putchar('\n');
    alphabet = getchar();
    if (isupper(alphabet))
    {
        putchar(tolower(alphabet));
        putchar('\n');
    }
    else
    {
        putchar(toupper(alphabet));
        putchar('\n');
    }

    return 0;
}