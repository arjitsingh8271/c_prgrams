#include <stdio.h> 
#include <stdlib.h>

typedef struct node
{
    int data ;
    struct node *next ;
} list;

void create();
void display();
void add_at_last();

list *head = NULL;

void main()
{
    int choice ;
    do
    {
        printf("\n------- MENU ------- \n");
        printf("1. create a new mode \n");
        printf("2. Display the linked list \n"); 
        printf("3. Add at last \n");
        printf("O. Exit the program \n");

        printf("\nEnter your choice: ");
        scanf("%d",&choice);

        switch(choice) 
        {
            case 1: create();
                    break;

            case 2: display();
                    break;

            case 3: add_at_last();
                    break;

            case 0: exit(0);

            default:    printf("Invalid Option");
        }
    }

    while(choice !=0);
}

void create()
{
    char prompt = 'n';
    do
    {
        list *curr = head;
        list *temp = (list *)malloc(sizeof(list));
        printf("\nEnter the value to be inserted: ");
        scanf("%d", &temp->data);
        temp->next = NULL;

        if (head == NULL)
        {
            head = temp;
        }

        else
        {
            while (curr->next != NULL)
                curr = curr->next;
                curr->next = temp;
        }

        printf("\nPress 'Y/y' to continue 'N/n' to quit\n");
        printf("Enter your choice: ");

        scanf("%c", &prompt);
        scanf("%c", &prompt);

    } while (prompt == 'Y' || prompt == 'y');
}

void display()  
{  
    struct node *ptr;  
    ptr = head;   
    if(ptr == NULL)  
    {  
        printf("Nothing to print");  
    }  
    else  
    {  
        printf("\nDisplay Values:\n");   
        while (ptr!=NULL)  
        {  
            printf("\n%d",ptr->data);  
            ptr = ptr -> next;  
        }  
    }  
}     

void add_at_last() 
{
    list *temp = NULL, *new_node = NULL;

    if (head == NULL) 
    {
        printf("Error: Operation Cannot be performed\n" "First Create a Linked List\n");
        return;
    }

    temp = head;
    new_node = (list *)malloc(sizeof (*new_node)); 
    new_node->next = NULL;
    printf("Enter a value: "); 
    scanf("%d", &new_node->data);

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
}