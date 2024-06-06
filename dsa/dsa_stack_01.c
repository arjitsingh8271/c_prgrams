// 10/09/21 DSA class 1st code

#include<conio.h>
#include<stdio.h>

int top = -1;
int bottom = -1;
int max = 5;
int stack[10];
int a, ch, i, flag = 1;

int main()
{
	clrscr();
}

void push()
{
	if(top == (max-1))
	{
		printf("\n stack is full: ");
	}
	else
	{
		printf("\n enter the element: ");
		scanf("%d", &a);
		//top++;
		//stack[top]=a;
		stack[++top]=a;
	}
}

// 14/09/21

void pop()
{
	if(top==bottom) //top==-1
	{
		printf("\n stack is empty");
	}
	else
	{
		printf("\n poped char is :- %d", stack[top]);
		top--;
	}
}