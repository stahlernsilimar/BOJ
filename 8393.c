#include <stdio.h>

int main()
{
  int n1;
  int n2;

  scanf ("%d", &n1);
  for (n2 = 0; n1 > 0; n1--)
    n2 = n2 + n1;
  printf("%d", n2);
  return (0);
}
