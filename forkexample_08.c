// Get Process ID and Parent Process ID

#include<stdio.h>
#include<unistd.h>
int main()
{

  printf("Process ID: %d\n", getpid() );
  printf("Parent Process ID: %d\n", getppid() );

  return 0;


}