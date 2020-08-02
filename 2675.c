#include <stdio.h>

int main()
{
  int T;
  int n;
  char word[20];
  int i;
  int j;
  int k;

  scanf("%d", &T);
  i = 0;
  while (i < T)
  {
    scanf("%d %s", &n, &word);
    j = 0;
    while (word[j] != '\0')
    {
      k = 0;
      while (k < n)
      {
        printf("%c", word[j]);
        k++;
      }
      j++;
    }
    i++;
    printf("\n");
  }
  return (0);
}
