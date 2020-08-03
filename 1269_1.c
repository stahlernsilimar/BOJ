/* Time Over */
// set1과 set2의 교집합을 0 처리
// 0이 아닌 숫자들만을 count

#include <stdio.h>
#include <stdlib.h>

int init(int *set, int n)
{
  int i;

  i = 0;
  while (i < n)
  {
    scanf("%d", &set[i]);
    i++;
  }
  return(*set);
}

int compare(int *set1, int *set2, int n1, int n2)
{
  int i;
  int j;

  i = 0;
  while (i < n1)
  {
    j = 0;
    while (j < n2)
    {
      if (set2[j] == set1[i])
        {
          set1[i] = 0;
          set2[j] = 0;
          break;
        }
      j++;
    }
    i++;
  }
  return(*set1, *set2);
}

int count_num(int *set1, int *set2, int n1, int n2)
{
  int count;
  int i;

  i = 0;
  count = 0;
  while (i < n1)
  {
    if (set1[i] != 0)
      count++;
    i++;
  }
  i = 0;
  while (i < n2)
  {
    if (set2[i] != 0)
      count++;
    i++;
  }
  return (count);
}

int main()
{
  int i;
  int n1;
  int n2;
  int count;

  scanf("%d %d", &n1, &n2);
  int* set1 = (int *)malloc(sizeof(int) * n1);
  int* set2 = (int *)malloc(sizeof(int) * n2);
  *set1 = init(set1, n1);
  *set2 = init(set2, n2);
  *set1, *set2 = compare(set1, set2, n1, n2);
  count = count_num(set1, set2, n1, n2);
  printf("%d", count);
}
