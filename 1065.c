#include <stdio.h>

int han(int num, int count)
{
  int i1;
  int i2;
  int i3;
  int gap1;
  int gap2;

  if (num < 100)
    count++;
  else if (num >= 100 && num <= 1000)
  {
    i1 = num / 100;
    i2 = num / 10 - ((num /100) * 10);
    i3 = num % 10;
    gap1 = i2 - i1;
    gap2 = i3 - i2;
    if (gap1 == gap2)
      count++;
  }
  return (count);
}

int main()
{
  int num1;
  int i;
  int count;

  scanf("%d", &num1);
  i = 1;
  count = 0;
  while (i <= num1)
  {
    count = han(i, count);
    i++;
  }
  printf("%d", count);
  return (0);
}
