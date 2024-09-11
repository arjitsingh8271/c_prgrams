#include <stdio.h>
#include <unistd.h>

int main()
{
	fork();
	printf("Hello \n");
}

/*
OUTPUT: Hello	// parent process 
		Hello	// child process
*/

/*
					P
					↓ 
				   fork
					↓ 
			   -------------
			   ↓           ↓ 
			   C1  fork    P
			   ↓		   ↓
			 ------      ------
			 ↓	  ↓		 ↓	  ↓
			 C2	 C1		 C3   P


no. of child process = (2^n - 1)
n = no. of fork()

total execution = 2^n

fork() return ID:
	0  	for child
	+ve for parent
	-ve for child

	see in fork_2.c
*/