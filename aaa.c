/*
#include <stdio.h>
 void main()
 {
 	int i;
 	for(i=0;i<5;i++)

 	{
 		int i=1;
 		printf("%d\n",i);
 		i++;
 	}
 }
*/
/*
#include<stdio.h>
void main()
 {
 	int i;
 	for(i=0;i<5;i++)

 	{
	        printf("%d\n",i&&1);
 		i++;
 	}
 }


#include <stdio.h>
int main()
{
	int a = 18, b = 10, c = 9, d = 10, e = 10;

	printf("%d\n", a + c == b >= e < c + d != 1);

	return 0;
}


#include <stdio.h>
int main()
{
	int i;
	for (i = 9; i < 10; i++)
	{
		printf("%d\n", i);

	}
	printf("%d\n", i);
return 0;
}
*/

#include <stdio.h>

/*
* Function to convert a given decimal number to its
* hexadecimal equivalent.
*/
int decimal_to_hex(long number, char *hexstr, int pos) {
 long i;
 int new_position, n;
 char hexchar;
 
 new_position = pos;
 
 if(number > 0) {
 i = number % 16;
 n = number / 16;
 new_position = decimal_to_hex(n, hexstr, pos);
 if(i >= 10) {
 switch(i) {
 case 10: hexchar = 'A'; break;
 case 11: hexchar = 'B'; break;
 case 12: hexchar = 'C'; break;
 case 13: hexchar = 'D'; break;
 case 14: hexchar = 'E'; break;
 case 15: hexchar = 'F'; break;
 }
 } else {
 hexchar = '0' + i;
 }
 hexstr[new_position++] = hexchar;
 hexstr[new_position] = '\0';
 }
 return new_position;
}

/*
* Function to convert a given binary number to
* its decimal equivalent.
*/
int binary_to_decimal(int num) {
 int rem, base = 1, decimal_number = 0;
 while( num > 0) {
 rem = num % 10;
 if((rem == 0) || (rem == 1)) {
 decimal_number = decimal_number + rem * base;
 num = num / 10 ;
 base = base * 2;
 } else {
 return -1; // Invalid binary number
 }
 }
 return decimal_number;
}

/*
* Function to convert a given decimal number in to 
* its octal equivalent.
*/
int decimal_to_octal(int number) {
 int octal_number = 0, rem, base = 1;
 
 while(number > 0) {
 rem = number % 8;
 octal_number = octal_number + rem * base;
 base = base * 10;
 number = number / 8;
 }
 return octal_number;
}

void main() {
 int binary_numer, decimal_number, octal_number;
 char hexstr[25] = "0";
 
 printf("Enter a binary number: ");
 scanf("%d", &binary_numer);

 printf("Given Binary number is: %d\n", binary_numer);
 
 decimal_number = binary_to_decimal(binary_numer);
 if(decimal_number == -1) {
 printf("\nInvalid binary number. Try again.");
 return;
 }
 printf("Its Decimal equivalent is: %d", decimal_number);

 octal_number = decimal_to_octal(decimal_number);
 printf("\nIts octal equivalent is: %d", octal_number);

 decimal_to_hex(decimal_number, hexstr, 0);
 printf("\nIts Hexa Decimal equivalent is: %s", hexstr);
}