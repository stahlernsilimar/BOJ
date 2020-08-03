#include <stdio.h>

int compare(char *word, int count)
{
  int i;
  int j;

  i = 1;
  while (word[i] != '\0')
  {
    j = i - 1;
    while (j >= 0)
    {
      if (word[i] == word[j] && word[i - 1] != word[i])
        return (count);
      j--;
    }
    i++;
  }
  count = count + 1;
  return (count);
}

int main()
{
  int i;
  int num;
  char word[100];
  int count;

  scanf("%d", &num);
  i = 0;
  count = 0;
  while (i < num)
  {
    scanf("%s", &word);
    count = compare(word, count);
    i++;
  }
  printf("%d", count);
  return (0);
}
