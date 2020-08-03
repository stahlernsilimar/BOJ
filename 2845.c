#include <stdio.h>

int main()
{
  int people;
  int area;
  int total;
  int n1;
  int n2;
  int n3;
  int n4;
  int n5;

  scanf("%d %d", &people, &area);
  total = people * area;
  scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
  printf("%d %d %d %d %d", n1 - total, n2 - total,
          n3 - total , n4 - total , n5 - total);
  return (0);
}
