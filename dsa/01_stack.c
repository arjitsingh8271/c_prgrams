//#include<conio.h>
#include<stdio.h>
int main()
{
  int top=-1;int bottom= -1;int max=7;
  int stack[20];
  int a,ch,i,flag=1;
  //clrscr();
  while(flag!=0)
  {
    printf("\npress 1 for push");
    printf("\npress 2 for pop");
    printf("\npress 3 for display");
    printf("\npress 4 for edit");
    printf("\n");
    printf("\nenter your choice:- ");
    scanf("%d",&ch);

    //if(ch==1||ch==2||ch==3||ch==4);
    //{
      switch(ch)
      {
        case 1:
        if(top==(max-1))
        {
          printf("\nstack is full");
        }
        else
        {
	       printf("\nenter the element:-  ");
	       scanf("%d",&a);
	       stack[++top]=a;
        }
        break;

        case 2:
        if(top==bottom)
        {
          printf("\nstack is empty");
        }
        else
        {
          printf("\npoped char is :- %d",stack[top]);
          top--;
        }
        break;

        case 3:
          printf("the stack is:-\n");
          for(i=0;i<=top;i++)
          for(i=0;i>=top;i--)
          {
            printf(" %d\n",stack[i]);  //printf("%d -> ",stack[i]);
          }
          printf("\n ");
          break;

        case 4:
        flag=0;
        break;

        default:
          printf("start again press enter\n");
      }
    //}
    //else
    //{
      //printf("invailed option.");
      //flag=0;
    //}
  }
//getch();
}
