#include <stdio.h>
#include <unistd.h>

int main()
{
	pid_t p;
	p = fork();
	printf("Hello %d\n", p);
}

/*
OUTPUT: Hello 30101	// parent process 
		Hello 0 	// child process
*/