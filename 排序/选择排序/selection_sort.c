#include <stdio.h>

void selectionSort(int arr[], int count)
{
  int min;
  for (int i = 0; i < count; i++)
  {
    min = i;
    for (int j = i + 1; j < count; j++)
    {
      if (arr[j] < arr[min])
      {
        min = j;
      }
    }
    if (min != i)
    {
      int temp = arr[i];
      arr[i] = arr[min];
      arr[min] = temp;
    }
  }
}

int main()
{
  int arr[6] = {5, 2, 7, 12, 3, 6};
  selectionSort(arr, 6);
  printf("result:");
  for (int i = 0; i < 6; i++)
  {
    printf(" %d", arr[i]);
  }
}
