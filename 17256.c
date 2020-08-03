#include <stdio.h>

int init(int *arr)
{
  int i;

  i = 1;
  while (i <= 3)
  {
    scanf("%d", &arr[i]);
    i++;
  }
  return (*arr);
}

int solve(int *a, int *c, int *b)
{
  b[1] = c[1] - a[3];
  b[2] = c[2] / a[2];
  b[3] = c[3] - a[1];
  return (*b);
}

int print(int *b)
{
  int i;

  i = 1;
  while (i <= 3)
  {
    printf("%d ", b[i]);
    i++;
  }
  return (0);
}

int main()
{
  int a[4];
  int b[4] = {0};
  int c[4];
  int i;

  *a = init(a);
  *c = init(c);
  *b = solve(a, c, b);
  print(b);
  return (0);
}
