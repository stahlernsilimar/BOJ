#include <stdio.h>

int sum(int *arr)
{
  int i;
  int total;

  i = 0;
  total = 0;
  while (i < 9)
  {
    total = total + arr[i];
    i++;
  }
  return (total);
}

int find(int *arr, int diff)
{
  int i;
  int j;
  int target;

  i = 0;
  target = 0;
  while (i < 8)
  {
    j = i + 1;
    while (j < 9)
    {
      target = arr[i] + arr[j];
      if (target == diff)
      {
        arr[i] = 0;
        arr[j] = 0;
        return (*arr);
      }
      j++;
    }
    i++;
  }
}

int main()
{
  int i;
  int total;
  int diff;
  int arr[9];

  i = 0;
  while (i < 9)
  {
    scanf("%d", &arr[i]);
    i++;
  }

  total = sum(arr);
  diff = total - 100;
  *arr = find(arr, diff);
  i = 0;
  while (i < 9)
  {
    if (arr[i] != 0)
      printf("%d\n", arr[i]);
    i++;
  }
  return (0);
}
