/*A program where parent process creates a child process and both parent and child run same program different code
*/


#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
    int pid;
    pid=fork();
    if(pid<0)
    {
        printf("\n Error ");
        exit(1);
    }
    else if(pid==0)
    {
        printf("\n Hello I am the child process ");
        printf("\n My pid is %d ",getpid());
        printf("\n My parent process Id is: %d\n", getppid());
        exit(0);
    }
    else
    {
        printf("\n Hello I am the parent process ");
        printf("\n My actual pid is %d \n ",getpid());
        exit(1);
    }

}