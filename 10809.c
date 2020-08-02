#include <stdio.h>

int ft_init(int *alpha)
{
  int j;

  j = 0;
  while (j < 26)
  {
    alpha[j] = -1;
    j++;
  }
  return (*alpha);
}

int main()
{
  char word[100];
  int i;
  int j;
  int alpha[26];

  scanf("%s", word);
  *alpha = ft_init(alpha);
  i = 0;
  while (word[i] != '\0')
  {
    j = 0;
    while (j < 26)
      {
        if ((word[i] == j + 'a') && (alpha[j] == -1))
          alpha[j] = i;
        j++;
      }
    i++;
  }
  j = 0;
  while (j < 26)
  {
    printf("%d ", alpha[j]);
    j++;
  }
  return (0);
}
