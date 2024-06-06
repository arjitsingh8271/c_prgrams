/*   C Program to Remove Characters in String Except Alphabets 
    
     ALGORITHM :
  1. Input the string from the user.
  2. Traverse the string, character by character.
  3. If the character is not an alphabet, do not add it to the resultant string.
  4. If the character is an alphabet, add it to the resultant string.
  5. Print the string.

*/


#include <stdio.h>
#include <string.h>
void main(){
    char str[150];
    int i,j;	

	printf("Input the string : ");
    fgets(str,sizeof str,stdin);	
    for(i=0; str[i]!='\0'; ++i)
    {
        while (!((str[i]>='a'&&str[i]<='z') || (str[i]>='A'&&str[i]<='Z' || str[i]=='\0')))
        {
            for(j=i;str[j]!='\0';++j)
            {
                str[j]=str[j+1];
            }
            str[j]='\0';
        }
    }
    printf("After removing the Output String : %s\n\n",str);
}
