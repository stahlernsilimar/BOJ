#include <stdio.h>

char alpha_check(char *word)
{
  int i;
  int j;
  int check[26] = {0};
  int max;
  char ret;

  i = 0;
  while (word[i] != '\0')
  {
    j = 0;
    while (j < 26)
    {
      if (word[i] == 'A' + j || word[i] == 'a' + j)
        check[j] = check[j] + 1;
      j++;
    }
    i++;
  }
  j = 0;
  max = 0;
  while(j < 26)
  {
    if (check[j] != 0)
    {
      if (check[j] > max && check[j] != max)
      {
        max = check[j];
        ret = 'A' + j;
      }
      else if (check[j] == max)
        ret = '?';
    }
    j++;
  }
  return (ret);
}

int main()
{
  char word[1000000];
  int i;
  char ret;

  scanf("%s", &word);
  ret = alpha_check(word);
  printf("%c", ret);
}
