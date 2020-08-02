#include <stdio.h>

int main()
{
  int n1;

  scanf ("%d", &n1);
  if (n1 >= 90 && n1 <= 100)
    printf("A");
  else if (n1 >= 80 && n1 < 90)
    printf("B");
  else if (n1 >= 70 && n1 < 80)
    printf("C");
  else if (n1 >= 60 && n1 < 70)
    printf("D");
  else
    printf("F");
  return (0);
}
