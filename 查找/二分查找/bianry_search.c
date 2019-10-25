#include <stdio.h>

int binary_search(int list[], int count, int value)
{
  int low = 0;
  int high = count - 1;

  while (low <= high)
  {
    int mid = (low + high) / 2;
    int guess = list[mid];
    if (guess == value)
    {
      return mid;
    }
    else if (guess < value)
    {
      low = mid + 1;
    }
    else
    {
      high = mid - 1;
    }
  }
  return -1;
}

int main()
{
  int list[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int value = 4;

  printf("result:%d", binary_search(list, (int)(sizeof(list) / sizeof(list[0])), value));
}
