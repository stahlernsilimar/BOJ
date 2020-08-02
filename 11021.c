#include <stdio.h>

int main()
{
  int n1;
  int n2;
  int n3;
  int i;

  scanf ("%d", &n1);
  for (i = 1; i <= n1; i++)
    {
      scanf ("%d %d", &n2, &n3);
      printf("Case #%d: %d\n", i, n2 + n3);
    }
  return (0);
}
