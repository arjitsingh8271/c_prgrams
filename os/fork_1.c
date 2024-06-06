#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
	// pid_t p;
	// p = fork();
	//printf("Hello %d\n", p);

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

*/