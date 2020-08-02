#include <stdio.h>
#include <stdlib.h>

int ft_strlen(int total)
{
  int digit;

  digit = 0;
  while (total > 0)
  {
    total = total / 10;
    digit++;
  }
  return (digit);
}

int main()
{
  int A;
  int B;
  int C;
  int total;
  int len;
  int count[10] = {0};
  int i;
  int j;

  scanf("%d %d %d", &A, &B, &C);
  total = A * B * C;
  len = ft_strlen(total);
  i = len;
  int* arr = (int *)malloc(sizeof(int) * len);
  while (i > 0)
  {
    j = 0;
    arr[i] = total % 10;
    while (j < 10)
    {
      if (arr[i] == j)
        count[j] = count[j] + 1;
      j++;
    }
    total = total / 10;
    i--;
  }
  j = 0;
  while (j < 10)
    {
      printf("%d\n", count[j]);
      j++;
    }
  return (0);
}
