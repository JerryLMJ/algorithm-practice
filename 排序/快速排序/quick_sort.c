#include <stdio.h>

int *quickSort(int arr[], int count)
{
  if (count <= 1)
  {
    return arr;
  }
  else
  {
    int pivot = arr[0];
    int less[] = {};
    int lessIndes = 0;
    int greater[] = {};
    int greaterIndex = 0;
    for (int i = 1; i < count; i++)
    {
      int el = arr[i];
      if (el <= pivot)
      {
        less[lessIndes] = el;
        lessIndes++;
      }
      else
      {
        greater[greaterIndex] = el;
        greaterIndex++;
      }
    }
    int *lessResult = quickSort(less, lessIndes + 1);
    int *greaterResult = quickSort(greater, greaterIndex + 1);
    int result[] = {};
    for (int i = 0; i < lessIndes + 1; i++)
    {
      result[i] = lessResult[i];
    }
    result[lessIndes + 1] = pivot;
    for (int i = 0; i < greaterIndex + 1; i++)
    {
      result[lessIndes + 1 + i] = greaterResult[i];
    }

    return *result;
  }
}

int main()
{
  int arr[7] = {6, 2, 1, 8, 7, 3, 5};
  quickSort(arr, 7);
  printf("result:");
  for (int i = 0; i < 7; i++)
  {
    printf(" %d", arr[i]);
  }
}