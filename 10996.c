#include <stdio.h>

int main()
{
  int i;
  int j;
  int num;

  scanf ("%d", &num);
  for (i = 1; i <= num; i++)
  {
    for (j = 1; j <= num; j++)
    {
      if (j % 2 == 1)
        printf("*");
      else if (j % 2 == 0)
        printf(" ");
    }
    printf("\n");
    for (j = 1; j <= num; j++)
    {
      if (j % 2 == 1)
        printf(" ");
      else if (j % 2 == 0)
        printf("*");
    }
    printf("\n");
  }
  return (0);
}
