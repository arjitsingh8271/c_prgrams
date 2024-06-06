#include <iostream>
#include <pthread.h>
#include <semaphore.h>

using namespace std;

sem_t sem1;
sem_t sem2;
sem_t sem3;

void * fun1(void *)
{   
    for(int i = 0; i < 20 ; i++)
    {
    sem_wait(&sem1);
    cout<<"4\n";
    sem_post(&sem2);
    }
}


void * fun2(void *)
{   

   for(int i = 0; i < 20 ; i++)
   {
    sem_wait(&sem2);
    cout<<"5\n";
    sem_post(&sem3);
   }

}

void * fun3 (void *)
{
   for(int i = 0; i< 20; i++)
   {

    sem_wait(&sem3);
    cout<<"6\n";
    sem_post(&sem1);

   }
}

int main()
{
   pthread_t t1;
   pthread_t t2;
   pthread_t t3;


   sem_init(&sem1,0,1);
   sem_init(&sem2,0,0);
   sem_init(&sem3,0,0);

   pthread_create(&t1,NULL,&fun1,NULL);
   pthread_create(&t2,NULL,&fun2,NULL);
   pthread_create(&t3,NULL,&fun3,NULL); 

   pthread_join(t1,NULL);
   pthread_join(t2,NULL);
   pthread_join(t3,NULL);

   sem_destroy(&sem1);
   sem_destroy(&sem2);
   sem_destroy(&sem3);

   return 1;
}