#include <stdio.h>

int main()
{
  int n1;

  scanf ("%d", &n1);
  if ((n1 % 400 == 0) || ((n1 % 4 == 0) && (n1 % 100 != 0 )))
    printf("1");
  else
    printf("0");
  return (0);
}
