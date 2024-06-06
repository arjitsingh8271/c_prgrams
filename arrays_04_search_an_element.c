// Qn. Creat an arrays of 10 elements and search an element from the array using function.

#include <stdio.h>

int search();

int arr[10], i, toSearch, count=0;


int main()
{
	printf("Enter element in array: ");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}

	search();

	return 0; 

}

int search()
{
	printf("Enter element to search: ");
	scanf("%d",&toSearch);

	for(i=0; i<10; i++)
    {
    	if(arr[i]==toSearch)
    	{
    		printf("Element %d found at index: [%d]\n", toSearch, i);
    		count++;
    	}
    }
    if(count==0)
    printf("%d not found.\n", toSearch);
    return 0;
   
}
