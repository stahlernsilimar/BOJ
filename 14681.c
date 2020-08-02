#include <stdio.h>

int main()
{
  int n1;
  int n2;

  scanf ("%d %d", &n1, &n2);
  if ((n1 > 0) && (n2 > 0))
    printf("1");
  if ((n1 < 0) && (n2 > 0))
    printf("2");
  if ((n1 < 0) && (n2 < 0))
    printf("3");
  if ((n1 > 0) && (n2 < 0))
    printf("4");
  return (0);
}
