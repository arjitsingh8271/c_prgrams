#include <stdio.h>
//#include <conio.h> 
#include <stdlib.h>

typedef struct node
{
    int data ;
    struct node *next ;
} list;

void create();
void display();
void add_at_beginning();
void add_after_value();
void add_before_value();
void add_at_end();
void del_last();
void del_mid();
void del_first();

list *head = NULL;

void main()
{
    int choice ;
    //clrscr();
    do
    {

        printf("\n------- MENU ------- \n");
        printf("1. create a new mode \n");
        printf("2. Display the linked list \n"); 
        printf("3. add a new node at the beginnings \n");
        printf("4. Add after a value \n");
        printf("5. Add before a given value \n"); 
        printf("6. Add at end \n");
        printf("7. Delete the last node \n");
        printf("8. Delete a given values \n");
        printf("9. Delete the first modes \n");
        printf("O. Exit the program \n");

        scanf("%d",&choice);

        switch(choice) 
        {
            case 1: create();
                    break;

            case 2: display();
                    break;

            case 3: add_at_beginning();
                    break;

            case 4: add_after_value();
                    break;

            case 5: add_before_value();
                    break;

            case 6: add_at_end();
                    break;

            case 7: del_last();
                    break;

            case 8: del_mid();
                    break;

            case 9: del_first();
                    break;

            case 0: exit(0);

            default:    printf("Invalid Option");
        }
    }

    while(choice !=0);
    //getch();
}


void create()
{

    char prompt = 'n';

    do
    {

        list *curr = head;
        list *temp = (list *)malloc(sizeof(list));
        printf("Enter the value to be inserted :");
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

        printf("Do you want to continue?\n");
        printf("stpress (Y/y) to continue\n");
        printf("Ntpress any other value to exit\n");
        printf("Enter your choice: ");

        scanf("%c", &prompt);
        scanf("%c", &prompt);

    } while (prompt == 'Y' || prompt == 'y');
}


void add_at_beginning()
{
    list *temp = (list *)malloc(sizeof(list));
    printf("Enter a value :");
    scanf("%d", &temp->data);
    temp->next = head ;
    head = temp;
}

    
void add_after_value()
{
    int value, isFound = 0;
    list *temp = head, *new_node = NULL;
    printf("enter a value after which you want to add a new mode :");
    scanf("%d", &value);
    while (temp != NULL)
    {
        if (temp->data == value)
        {
            isFound = 1;
            break;
        }
        temp = temp->next;
    }

    if (isFound)
    {
        new_node = (list *)malloc(sizeof(list));
        printf("Enter a new value in add after the value %d: ", value);
        scanf("%d", &new_node->data);
        new_node->next = temp->next;
        temp->next = new_node;
    }

    else
    {
        printf("%d is not present in the list", value);
    }
}


void add_before_value()
{
    int value, isFound = 0;
    list *temp = head,*new_node = NULL;
    printf("Enter the value before which you want to add a new node :");
    scanf("%d", &value);

    if (head->data == value)
    {
        add_at_beginning();
    }
    
    while(temp->next !=NULL)
    {
        if (temp->next->data == value)
        {
            isFound = 1;
            break;
        }

        temp = temp->next;

        if (isFound)
        {
            new_node = (list *)malloc(sizeof(list));
            printf("enter a new value to add before the value %d: ", value);
            scanf("%d", &new_node->data);
            new_node->next = temp->next;
            temp->next = new_node;
        }

        else
        {
            printf("%d is not present in the list \n", value);
        }
    }
}

void add_at_end() 
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

    
void display()
{
    list *curr = head;
    if (curr = NULL)
    {
        printf("Empty List\n");
        return;
    }

    while (curr != NULL)
    {
        printf("%d", curr->data);
        if (curr ->next != NULL)
        {
            printf("->");
        }
        
        curr = curr->next;
    }    
        printf("\n\n");
}

        
void del_last()
{
    list *curr = NULL;
    list *prevCurr = NULL;

    if (head == NULL)
    {
        printf("No elements in the list to delete \n"); 
    }
    
    else if (head->next ==NULL) 
    {
        free(head);
        head = NULL;
    }

    else
    {
        curr = head;
        prevCurr = head;
        
        while (curr->next != NULL)
        {
            prevCurr = curr;
            curr = curr->next;
        }

        free(curr);
        curr = NULL;
        prevCurr->next = NULL;
    }

}


void del_mid() 
{
    list *curr = head, *prevCurr = head;
    int value;

    printf("Enter the value which you want to delete: ");
    scanf("%d", &value);

    if (head == NULL)
    {
        printf("No value in the list to delete\n");
        return;
    }

    if (head->data == value)
    {
        head = head->next;
        free(curr);
        curr = NULL;
        return;
    }

    while (curr != NULL)
    {
        if (curr->data == value)
        {
            prevCurr->next = curr->next;
            free(curr);
            curr = NULL;
            return;
        }

        prevCurr = curr;
        curr = curr->next;
    }

    printf("Entetred value not present in the list\n");
}
                    
void del_first()
{
    list *curr = NULL;

    if (head == NULL)
    {
        printf("no node can not be deleted as list is emptyn");
        return;
    }

    curr = head;
    head = head->next;
    free(curr);
    curr = NULL;
}