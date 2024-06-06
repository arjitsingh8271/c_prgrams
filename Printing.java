/*	Printing:
	System.out.print()   print without a new line
	System.out.println() print with a new line
	System.out.printf()	 just like printf() in c, using Formate Specifier
	System.out.format()	 just like printf()

	Formate Specifier:
	%[argument_index][flags][width][.percision] conversion

	argument_index -  1$, 2$, 3$, ...
	flags -  '-', '+', '0', ' ', '('
	conversion - char   c  
				 int    d,o,x  
				 float  f,e,g  
				 string s

*/

class Printing
{
	public static void main (String args[])
	{
		int a=10;
		float b=12.56f;
		String c="native";

		System.out.print("Hello");
		System.out.println("Hello");

	}
}