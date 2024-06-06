// Qn. Creat an 2D arrays of 10 elements and search an element from the array using function.

#include <stdio.h>

int search();

int arr[3][3], i, j, toSearch, count=0;


int main()
{
	printf("Enter element in array: ");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}

	search();

	return 0; 

}

int search()
{
	printf("Enter element to search: ");
	scanf("%d",&toSearch);

	for(i=0; i<3; i++)
    {
    	for(j=0; j<3; j++)
    	{
    		if(arr[i][j]==toSearch)
    		{
    			printf("Element %d found at index: [%d][%d]\n", toSearch, i, j);
    			count++;
   			}
    	}
    	
    }
    if(count==0)
    printf("%d not found.\n", toSearch);
    return 0;
   
}
