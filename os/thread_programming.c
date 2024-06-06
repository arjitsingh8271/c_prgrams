# include <pthread.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

void *thread_func (void *arg);
int i,j;
int main()
{
	pthread_t a;
	pthread_create (&a, NULL, thread_func, NULL);
	pthread_join (a, NULL);

	printf("Inside main program");
	for (int j = 20; j < 25; j++)
	{
		printf("%d\n",j);
		sleep(1);
	}
}

void *thread_func (void *arg)
{
	printf("Inside thread");
	for (int i = 0; i < 5; i++)
	{
		printf("%d\n",i);
		sleep(1);
	}
}