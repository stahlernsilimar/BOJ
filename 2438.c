#include <stdio.h>

int main()
{
  int n1;
  int i;
  int j;

  scanf("%d", &n1);
  for (i = 0; i < n1; i++)
  {
    for (j = 0; j <= i; j++)
      printf("*");
    printf("\n");
  }
  return (0);
}
