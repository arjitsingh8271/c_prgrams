#include <stdio.h>  
# define max 6  

int queue[max];            // array declaration  
int front=-1;  
int rear=-1;  
    
void enqueue();
void dequeue();
void display();

int main()  
{  
    int choice=1,x;       // variables declaration  
      
    while(choice !=4)      // while loop  
    {  
        printf("\n1. Insert an element");  
        printf("\n2. Delete an element");  
        printf("\n3. Display the element");
        printf("\n4. Exit");  
        printf("\nEnter your choice: ");  
        scanf("%d", &choice);  
      
        switch(choice)  
        {  
            case 1:  
            printf("Enter the element which is to be inserted: ");  
            scanf("%d", &x);  
            enqueue(x);  
            break;  
        
            case 2:  
            dequeue();  
            break;  
        
            case 3:  
            display();

            case 4:  
            exit(0);  
            break;  
            
            default:   
            printf("\nEnter valid choice.\n");   
  
        }   
    }

    return 0;  
}  

 
void enqueue(int element)           // function to insert an element in a circular queue 
{  
    if(front==-1 && rear==-1)       // condition to check queue is empty  
    {  
        front=0;  
        rear=0;  
        queue[rear]=element;  
    }  
    else if((rear+1)%max==front)    // condition to check queue is full  
    {  
        printf("\n Alert:(Queue is full or Queue overflow)\n");  
    }  
    else  
    {  
        rear=(rear+1)%max;       // rear is incremented  
        queue[rear]=element;     // assigning a value to the queue at the rear position.  
    }  
}  
      

void dequeue()                     // function to delete the element from the queue   
{  
    if((front==-1) && (rear==-1))  // condition to check queue is empty  
    {  
        printf("\n Alert:(Queue is empty or Queue underflow)\n");  
    }  
    else if(front==rear)  
    {  
        printf("\nThe dequeued element is: %d ", queue[front]);  
        front=-1;  
        rear=-1;  
    }   
    else  
    {  
        printf("\nThe dequeued element is: %d ", queue[front]);  
        front=(front+1)%max;  
    }  
}  
 
void display()              // function to display the elements of a queue 
{  
    int i=front;  
    if(front==-1 && rear==-1)  
    {  
        printf("\n Alert:(Queue is empty or Queue underflow)\n");  
    }  
    else  
    {  
        printf("\nElements in a Queue are: \n");  
        while(i<=rear)  
        {  
            printf("%d ", queue[i]);  
            i=(i+1)%max;  
        }  
    }  
}  
    