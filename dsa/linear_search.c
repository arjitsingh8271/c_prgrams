#include <stdio.h>

void main()
{  
    int num;
    int i,  keynum, found = 0;
    printf("Enter the number of elements ");
    scanf("%d", &num);
    int array[num];
    printf("Enter the elements one by one \n");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Enter the element to be searched ");
    scanf("%d", &keynum);

    for (i = 0; i < num ; i++)    //  Linear search begins
    {
        if (keynum == array[i] )
        {
            found = 1;
            break;
        }
    }

    if (found == 1)
    printf("Element is present in the array at position: %d\n",i+1);

    else
    printf("Element is not present in the array\n");
}