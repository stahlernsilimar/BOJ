#include <stdio.h>

int generator_check(int *arr)
{
  int i;
  int num;

  i = 0;
  while (i < 100)
  {
    num = i + (i / 10) + (i % 10);
    arr[num - 1] = 0;
    i++;
  }
  while (100 <= i && i < 1000)
  {
    num = i + (i / 100) + ((i / 10) - (i / 100) * 10) + (i % 10);
    if (num < 10000)
      arr[num - 1] = 0;
    i++;
  }
  while (1000 <= i && i < 10000)
  {
    num = i + (i / 1000) + ((i / 100) - (i / 1000) * 10) + ((i / 10) - (i / 100) * 10) + (i % 10);
    if (num <= 10000)
      arr[num - 1] = 0;
    i++;
  }

  return (*arr);
}

int main()
{
  int i;
  int arr[10000];

  i = 0;
  while (i < 10000)
  {
    arr[i] = i + 1;
    i++;
  }
  *arr = generator_check(arr);
  i = 0;
  while (i < 10000)
  {
    if (arr[i] != 0)
      printf("%d\n", arr[i]);
    i++;
  }
}
