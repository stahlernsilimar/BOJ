#include <stdio.h>

int main()
{
  int n1;
  int n2;
  int n3;

  scanf ("%d", &n1);
  for (n1; n1 > 0; n1--)
    {
      scanf ("%d %d", &n2, &n3);
      printf("%d\n", n2 + n3);
    }
  return (0);
}
