#include <stdio.h>

int main()
{
  int n1;
  int i;
  int j;
  int k;

  scanf("%d", &n1);
  for (i = 0; i < n1; i++)
  {
  	for (k = 1; k < (n1 - i); k++)
  	  printf(" ");
    for (j = 0; j <= i; j++)
      printf("*");
    printf("\n");
  }
  return (0);
}
