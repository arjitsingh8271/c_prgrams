#include <stdio.h>

void main()
{
    int array[10];
    int i, j, num, temp, keynum;
    int low, mid, high; 
    printf("Enter the value of num \n");
    scanf("%d", &num);
    printf("Enter the elements one by one \n");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Input array elements \n");
    for (i = 0; i < num; i++)
    {
        printf("%d\n", array[i]);
    }

    for (i = 0; i < num; i++)     //   Bubble sorting begins
    {
        for (j = 0; j < (num - i - 1); j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    printf("Sorted array is...\n");
    for (i = 0; i < num; i++)
    {
        printf("%d\n", array[i]);
    }

    printf("Enter the element to be searched \n");
    scanf("%d", &keynum);

    low = 1;             //  Binary searching begins 
    high = num;
    do
    {
        mid = (low + high) / 2;
        if (keynum < array[mid])
            high = mid - 1;

        else if (keynum > array[mid])
            low = mid + 1;
    } while (keynum != array[mid] && low <= high);

    if (keynum == array[mid])
    {
        printf("SEARCH SUCCESSFUL \n");
    }

    else
    {
        printf("SEARCH FAILED \n");
    }
}



/*
// BINARY SEARCH USING RECURSION

//#include<conio.h>
#include<stdio.h> 
#include<math.h>

int bsc (int[], int,int,int);
int f=1;

int main()
{
    int n,i,a[20],k, low, high;
    //clrscr();
    
    printf("How many no you want :- " );
    scanf("%d",&n); 
    
    printf("\nEnter elements:- ");  
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("\nEnter the searching element: "); 
    scanf("%d",&k);
    
    low=0; high=n;
    bsc(a,low, high, k);
    
    if(f==1)
    {
        printf("There is no such element in the array\n\n");
    }
    //getch();

}

int bsc(int a[], int l, int h, int p)
{
    int m;
    if (l > h)
    {
        return (0);
    }
    else
    {
        m = (l + h) / 2;
        if (a[m] == p)
        {
            printf("Search sucessfull and it is at position: %d \n\n", m + 1);
            f = 0;
            return (1);
        }

        if (a[m] > p)
        {
            bsc(a, l, m - 1, p);
        }
        else
            bsc(a, m + 1, h, p);
    }
}
*/