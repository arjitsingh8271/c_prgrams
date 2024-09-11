#include <stdio.h>
#include <unistd.h>

int main()
{
	pid_t p;
	
	if (fork() || fork()){	
		p = fork();
	}
	
	printf("Hello %d\n", p);

	return 0;
}


/* && operator
OUTPUT: Hello 36538
		Hello 36538
		Hello 36538
		Hello 0
*/ 

/* || operator
OUTPUT: Hello 36822
		Hello 0
		Hello 36824
		Hello 0
		Hello 21989
*/ 