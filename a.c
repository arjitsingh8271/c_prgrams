// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() 
// {
    
//     char s[100];
//     scanf("%[^\n]%*c", s);
    
//     printf("Hello world!\n%s",s);   
//     return 0;
// }

# include <stdio.h>
void main()
{
    char a;

    printf("Enter y or n: \n");
    scanf("%c",&a);
    if (a == 'y')
    {
        printf("You choose Yes\n");
    }
    else
    printf("you choose no or something else\n");

}