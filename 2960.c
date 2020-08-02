#include <stdio.h>

int sieve(int *arr, int n1, int n2)
{
  int i;
  int j;
  int count;
  int index;

  i = 2;
  count = 0;
  while(i <= n1)
  {
    j = 1;
    while (j <= n1)
    {
      if (i * j <= n1 && arr[i * j] != 0)
      {
        index = arr[i * j];
        arr[i * j] = 0;
        count++;
        if (count == n2)
          return (index);
      }
      j++;
    }
    i++;
  }
  return (0);
}

int main()
{
  int n1;
  int n2;
  int arr[1001];
  int i;
  int ans;

  scanf("%d %d", &n1, &n2);
  i = 2;
  while (i <= n1)
  {
    arr[i] = i;
    i++;
  }
  ans = sieve(arr, n1, n2);
  printf("%d", ans);
}
