/* wrong */
// 문제에 대한 접근이 잘못됨
// 1000자리수임에 유의할 것

#include <stdio.h>

int main()
{
  int n1;
  int n2;

  scanf("%d %d", &n1, &n2);
  printf("%d %d %d", n1 + n2, n1 - n2, n1 * n2);
  return (0);
}
