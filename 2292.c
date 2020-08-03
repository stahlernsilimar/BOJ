#include <stdio.h>

int main()
{
  int target;
  int i;
  int j;
  int bef;
  int aft;

  scanf("%d", &target);

  i = 0;
  j = 1;
  while (i >= 0)
  {
    bef = aft;
    aft = i * 6 + 1;
    if (target > bef && target <= aft)
    {
      break;
    }
    i = i + j;
    j++;
  }
  printf("%d", j);
}

// 1 | 0 * 6 + 1
// 2 3 4 5 6 7 / | 1 * 6 + 1
// 8 9 10 11 12 13 / 14 15 16 17 18 19 | 3 * 6 + 1
// 20 21 22 23 24 25 / 26 27 28 29 30 31 / 32 33 34 35 36 37 | 6 * 6 + 1
