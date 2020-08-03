#include <stdio.h>

int main()
{
  int A;
  int B;
  int C;
  int X;

  scanf("%d %d %d", &A, &B, &C);

  if (B >= C)
  {
    printf("-1");
    return (0);
  }
  X = 1;
  while (X > 0)
  {
    if (X > A / (C - B))
      break;
    X++;
  }
  printf("%d", X);
  return (0);
}
