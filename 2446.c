#include <stdio.h>

int main()
{
  int i;
  int j;
  int num;

  scanf("%d", &num);
  for (i = 0; i <= ((2 * num) - 1); i++)
  {
    if (i < num)
      {
        for (j = 0; j < i; j++)
          printf(" ");
        for (j = 2 * (num - i) - 1; j > 0; j--)
          printf("*");
        printf("\n");
      }
    if (i > num)
    {
      for (j = ((2 * num) - i - 1); j > 0; j--)
        printf(" ");
      for (j =  ((2 * num) - i); j <= i; j++)
        printf("*");
      printf("\n");
    }
  }
}
