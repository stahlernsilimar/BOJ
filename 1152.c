#include <stdio.h>

int main()
{
  char string[1000000];
  int j;
  int count;

  j = 0;
  count = 0;
  scanf("%[^\n]s", string);

  while(string[j] != '\0')
  {
    if (string[j] == ' ' && string[j - 1] != '\0')
        count++;
    else if  (string[j] != ' ' && string[j + 1] == '\0')
        count++;
    j++;
  }
  printf("%d", count);
  return (0);
}
