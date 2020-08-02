#include <stdio.h>

int main()
{
  int n1;
  int n2;
  int n3;
  int n4;
  int n5;
  int n6;

  scanf("%d %d", &n1, &n2);
  n3 = n1 * (n2 % 10);
  n4 = n1 * ((n2 % 100) / 10);
  n5 = n1 * (n2 / 100);
  n6 = n3 + (n4 * 10) + (n5 * 100);
  printf("%d\n", n3);
  printf("%d\n", n4);
  printf("%d\n", n5);
  printf("%d", n6);
  return (0);
}
