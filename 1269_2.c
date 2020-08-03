/* Time Over */
// set1로 배열 설정
// set2에 들어와야 할 문자들과 set1을 비교,
// 교집합 갯수 파악 후 n1 + n2 - (2 * 교집합) 출력

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

int compare(int *set1, int n1, int n2)
{
  int i;
  int j;
  int same;
  int num;

  i = 0;
  same = 0;
  while (i < n2)
  {
    j = 0;
    scanf("%d", &num);
    while (j < n1)
    {
      if (num == set1[j])
        same++;
      j++;
    }
    i++;
  }
  return (same);
}

int main()
{
  int n1;
  int n2;
  int same;

  scanf("%d %d", &n1, &n2);
  int* set1 = (int *)malloc(sizeof(int) * n1);
  *set1 = init(set1, n1);
  same = compare(set1, n1, n2);
  printf("%d", n1 + n2 - (2 * same));
  return (0);
}
