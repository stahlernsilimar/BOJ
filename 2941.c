#include <stdio.h>

int main()
{
  int i;
  char word[100];
  int count;

  scanf("%s", &word);
  i = 0;
  count = 0;
  while (word[i] != '\0')
  {
    if (word[i] == '=' && word[i - 1] == 'z' && word[i - 2] == 'd' &&
        word[i - 1] != '\0' && word[i - 2] != '\0')
      count = count - 2;
    else if (word[i] == '=' && (word[i - 1] == 'c' ||
        word[i - 1] == 's' || word[i - 1] == 'z') && word[i - 1] != '\0')
      count = count - 1;
    else if (word[i] == '-' && (word[i - 1] == 'c' || word[i - 1] == 'd'))
      count = count - 1;
    else if (word[i] == 'j' && (word[i - 1] == 'l' || word[i - 1] == 'n'))
      count = count - 1;
    count++;
    i++;
  }
  printf("%d", count);
}
