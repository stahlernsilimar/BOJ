#include <stdio.h>

int main()
{
  int n1;
  char n2[100];
  int total;
  int i;

  scanf("%d", &n1);
  scanf("%s", &n2);
  i = 0;
  total = 0;
  while (n2[i] != '\0')
  {
    total = total + (n2[i] - '0');
    i++;
  }
  printf("%d", total);
  return (0);
}
