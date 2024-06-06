/* The programe requests the user to enter a character and display a message on the screen telling
the user whether the character is an alphabet or digit, or any special character. */

#include <stdio.h>
#include <ctype.h>
int main()
{
   char character;
   printf("Press any key\n");
   character = getchar();
   if (isalpha(character) >0)
   {
	   printf("The character is a letter.\n");
   }
   else if (isdigit(character) >0)
   {
	   printf("The character is a digit.\n");
   }
   else
   {
	   printf("The character is not alphanumeric \nIt is a special character.\n");
   }
   
   return 0;
}