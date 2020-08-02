#include <stdio.h>

int check_same(int* num, int i)
{
  int j;
  int flag;

  flag = 0;
  j = i + 1;
    while (j < 10)
    {
      if (num[i] == num[j])
        flag = 1;
      j++;
    }
  return (flag);
}

int main()
{
  int num[10];
  int i;
  int index;
  int count;

  i = 0;
  while (i < 10)
  {
    scanf("%d", &index);
    num[i] = index % 42;
    i++;
  }
  i = 0;
  count = 0;
  while (i < 10)
  {
    if (!check_same(num, i))
      count++;
    i++;
  }
  printf("%d", count);
}
