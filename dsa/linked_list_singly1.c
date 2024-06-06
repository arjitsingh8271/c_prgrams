// Linked list or Singly Linked list

# include <stdio.h>
# include <stdlib.h>

struct node
{
	int data;
	struct node *link_adders;
};

void insert();
void display();

struct node *head *new_node *temp;

void insert ()
{
	head = NULL; 
	char choice;

	new_node = (struct node *)malloc(sizeof(struct*node));
	printf("Enter data: \n");
	scanf("%d",&new_node->data); 
	new_node->link_adders = NULL;

	if (head == 0)
	{
		head = new_node = temp;
	}
	else
	{
		temp->link_adders = new_node;
		temp = new_node;
	}

	printf("Do you want to continue (y/n) \n");
	scanf("%d", &choice);
	if ((choice=='y') || (choice=='Y'))
	{
		void insert();
	}
	else
	{
		void display();
	}

}

void display ()
{
	while(temp != 0)
	{
		printf("%d-> ",temp->data);
		temp = temp->link_adders;
	}

}

