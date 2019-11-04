#include <stdio.h>

void swap(int arr[], int i, int j)
{
  int temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}

void quickSort(int arr[], int low, int high)
{
  if (low < high)
  {
    int last = low;
    for (int i = low + 1; i <= high; i++)
    {
      if (arr[i] < arr[last])
      {
        swap(arr, i, last + 1);
        swap(arr, last, last + 1);
        last++;
      }
    }
    quickSort(arr, low, last - 1);
    quickSort(arr, last + 1, high);
  }
}

int main()
{
  int arr[7] = {6, 2, 1, 8, 7, 3, 5};
  quickSort(arr, 0, 6);
  printf("result:");
  for (int i = 0; i < 7; i++)
  {
    printf(" %d", arr[i]);
  }
}