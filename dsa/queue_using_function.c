#include<stdio.h>   
#include<stdlib.h>  
#define maxsize 5  

void insert();  
void delete();  
void display();  

int front = -1, rear = -1;  
int queue[maxsize];  

void main ()  
{  
    int choice;   
    while(choice != 4)   
    {       
        printf("\n1.Insert an element");
        printf("\n2.Delete an element");
        printf("\n3.Display the queue");
        printf("\n4.Exit\n");  
        printf("\nEnter your choice: ");  
        
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            insert();  
            break;  
            
            case 2:  
            delete();  
            break;  
            
            case 3:  
            display();  
            break;  
            
            case 4:  
            exit(0);  
            break;  
            
            default:   
            printf("\nEnter valid choice.\n");  
        }  
    }  
}  
void insert()  
{  
    int item;  
    printf("\nEnter the element: \n");  
    scanf("\n%d",&item);      
    if(rear == maxsize-1)  
    {  
        printf("\n Alert:(Queue is full or Queue overflow)\n");  
        return;  
    }  
    if(front == -1 && rear == -1)  
    {  
        front = 0;  
        rear = 0;  
    }  
    else   
    {  
        rear = rear+1;  
    }  
    queue[rear] = item;  
    printf("\nValue Inserted ");  
      
}  
void delete()  
{  
    int item;   
    if (front == -1 || front > rear)  
    {  
        printf("\n Alert:(Queue is empty or Queue underflow)\n");  
        return;  
              
    }  
    else  
    {  
        item = queue[front];  
        if(front == rear)  
        {  
            front = -1;  
            rear = -1 ;  
        }  
        else   
        {  
            front = front + 1;  
        }  
        printf("Value Deleted. \n");  
    }  
      
      
}  
      
void display()  
{  
    int i;  
    if(rear == -1)  
    {  
        printf("\nEmpty Queue\n");  
    }  
    else  
    {   printf("\nPrinting Values: \n");  
        for(i=front;i<=rear;i++)  
        {  
            printf("%d\n",queue[i]);  
        }     
    }  
}  