#include <stdio.h>

int main()
{
  int n;
  int total;
  int i;

  i = 1;
  total = 0;
  while (i <= 5)
  {
    scanf("%d", &n);
    total = total + (n * n);
    i++;
  }
  printf("%d", total % 10);
  return (0);
}
