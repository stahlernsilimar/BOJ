#include <stdio.h>

int main()
{
  int n1;
  int n2;

  scanf("%d %d", &n1, &n2);
  if (n1 > n2)
    printf(">");
  else if (n1 < n2)
    printf("<");
  else if (n1 == n2)
    printf("==");
  return (0);
}
