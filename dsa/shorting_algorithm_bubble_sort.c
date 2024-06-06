# include <stdio.h>

void bubbleSort();
void printArray();

int main() 
{
  int data[] = {-2, 0, 2, 1, -1};
  int size = sizeof(data) / sizeof(data[0]);      // find the array's length

  bubbleSort(data, size);
  
  printf("Sorted Array in Ascending Order:\n");
  printArray(data, size);
}

void bubbleSort(int array[], int size)
{
  for (int step = 0; step < size - 1; ++step)       // loop to access each array element
  {
    for (int i = 0; i < size - step - 1; ++i)       // loop to compare array elements
    {
      if (array[i] > array[i + 1])                  // compare two adjacent elements change > to < to sort in descending order
      {
        int temp = array[i];                 // swapping occurs if elements are not in the intended order
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
}

void printArray(int array[], int size)           // print array 
{
  for (int i = 0; i < size; ++i) 
  {
    printf("%d ", array[i]);
  }
  printf("\n");
}

