#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num;
  int i;
  int input;
  int min;
  int max;

  scanf ("%d", &num);
  int* arr = (int *)malloc(sizeof(int) * num);
  i = 0;
  while (i < num)
  {
    scanf("%d", &input);
    arr[i] = input;
    i++;
  }
  i = 0;
  min = arr[0];
  max = arr[0];
  while (i < num)
  {
    if (arr[i] < min)
      min = arr[i];
    if (arr[i] > max)
      max = arr[i];
    i++;
  }

  printf("%d %d", min, max);
  return (0);
}
