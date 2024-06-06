#include<stdio.h>

void push();
void pop();
void display();
void stackTop();
void peek();
void isEmpty();
void isFull();

int top=-1;
int bottom= -1;
int max=5;
int stack[20];
int a,ch,i,flag=1;

int main()
{
	

	while(flag!=0)
	{
		printf("\n push()     Press 1 for push");
    	printf("\n pop()      Press 2 for pop");
    	printf("\n display()  Press 3 for display");
    	printf("\n stackTop() Press 4 to show top most element");
    	printf("\n peek()     Press 5 to show which position having which value");
    	printf("\n isEmpty()  Press 6 for check stack is Empty");
    	printf("\n isFull()   Press 7 for check stack is Full");
    	printf("\n exit       Press 8 to exit");
    	printf("\n");
    	printf("\nEnter your choice:- ");
    	scanf("%d",&ch);

    	switch(ch)
    	{
    		case 1:
    		push();
    		break;

    		case 2:
    		pop();
    		break;

    		case 3:
    		display();
    		break;

    		case 4:
    		stackTop();
    		break;

    		case 5:
    		peek();
    		break;

    		case 6:
    		isEmpty();
    		break;

    		case 7:
    		isFull();
    		break;

    		case 8:
    		flag=0;
    		break;

    		default :
    		printf("\nAlert:(Invaild input)\n");
    		break;
    	}

	}
}

void push()
{
	if(top==(max-1))
    {
    	printf("\n Alert:(Stack is full or Stack overflow)\n");
    }
   	else
   	{
   		printf("\n Enter the element: ");
   		scanf("%d",&a);
   		stack[++top]=a;
   	}
}

void pop()
{
	if(top==bottom)
    {
       	printf("\n Alert:(Stack is empty or Stack underflow)\n");
    }
    else
    {
   		printf("\n (Poped char is :- %d)\n",stack[top]);
        top--;
    }
}

void display()
{
	printf("\n The stack is:-\n");
	for(i=top;i>=0;i--)
    //for(i=0;i<=top;i++)
    {
     	printf(" %d\n",stack[i]);
    }
}

void stackTop()
{
	if(top==bottom)
	{
		printf("\n Alert:(Stack is empty or Stack underflow)\n");
	}
	else
	{
		printf("\n (The top element is :- %d)\n",stack[top]);
	}
}

void peek()
{
	int x;
	printf("Enter the position: ");
	scanf("%d",&x);
	if(top - x + 1 <= 0)
	{
		printf("\n Alert:(Stack is empty or Stack underflow)\n");
	}
	else
	{
		printf("\n Entered position value is: %d\n",stack[top-x+1]);
	}
}

void isEmpty()
{
	if(top==bottom)
    {
      	printf("\n (True)\n");
    }
    else
    {
     	printf("\n (False)\n");
    }

}

void isFull()
{
	if(top==(max-1))
    {
  		printf("\n (True)\n");
   	}
    else
    {
       	printf("\n (False)\n");
    }

}-