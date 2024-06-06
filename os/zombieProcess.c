#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
int main (void)
{
	pid_t p;
	p = fork();
	if (p==0)
	{
		printf("\n Child process \n");
		printf("My PID: %d\n", getpid());
		printf("My parent process PID is %d\n", getpid());
	}

	else
	{
		sleep(3);
		printf("\n Parent process \n");
		printf("My PID: %d\n", getpid());
		printf("My Child process PID is %d\n", getpid());
	}
	return 0;
}