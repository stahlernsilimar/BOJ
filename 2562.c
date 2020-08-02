#include <stdio.h>

int main()
{
  int arr[10];
  int i;
  int index;
  int max;
  int max_i;

  i = 1;
  while (i <= 9)
  {
    scanf("%d", &index);
    arr[i] = index;
    i++;
  }
  max = arr[1];
  max_i = 1;
  i = 1;
  while (i <= 9)
  {
    if (arr[i] > max)
      {
        max = arr[i];
        max_i = i;
      }
      i++;
  }
  printf("%d\n", max);
  printf("%d", max_i);
}
