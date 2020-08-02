#include <stdio.h>

int main()
{
  int n1;
  int n2;
  int n3;

  scanf ("%d %d", &n1, &n2);
  if (n1 < 1 && n2 < 45)
    n1 = 24;
  n3 = n1 * 60 + n2;
  n3 = n3 - 45;
  n1 = n3 / 60;
  n2 = n3 % 60;
  printf("%d %d", n1, n2);
  return (0);
}
