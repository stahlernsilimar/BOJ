#include <stdio.h>

int main()
{
  int total;
  int n1;
  int n2;

  scanf("%d", &total);

  n1 = total / 5;
  while (n1 >= 0)
  {
    n2 = (total - (n1 * 5)) / 3;
    if (n2 = (total - (n1 * 5)) % 3 == 0)
      {
        n2 = (total - (n1 * 5)) / 3;
        break;
      }
    n1--;
  }
  if (n1 == 0 && total % 3 != 0)
  {
    printf("-1");
    return (0);
  }
  printf("%d\n", n1 + n2);
  return (0);
}
