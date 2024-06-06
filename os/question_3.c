#include <unistd.h>
#include <stdio.h>
  
int main()
{
    // Creating first child
    int n1 = fork();
  
    // Creating second child. First child
    // also executes this line and creates
    // grandchild.
    int n2 = fork();
  
    if (n1 > 0 && n2 > 0) {
        printf("parent\n");
        printf("%d %d \n", n1, n2);
        printf(" my id is %d \n", getpid());
    }
    else if (n1 == 0 && n2 > 0)
    {
        printf("First child\n");
        printf("%d %d \n", n1, n2);
        printf("my id is %d  \n", getpid());
    }
    else if (n1 > 0 && n2 == 0)
    {
        printf("Second child\n");
        printf("%d %d \n", n1, n2);
        printf("my id is %d  \n", getpid());
    }

    return 0;
}

/*
Explanation – Here, we had used fork() function to create four processes 
one Parent and three child processes.

    An existing process can create a new one by calling the fork( ) function.
    The new process created by fork() is called the child process.
    We are using here getpid() to get the process id
    In fork() the total process created is = 2^number of fork()

Note – At some instance of time, it is not necessary that child process 
will execute first or parent process will be first allotted CPU, any process
 may get CPU assigned, at some quantum time. Moreover process id may differ 
 during different executions.
 */