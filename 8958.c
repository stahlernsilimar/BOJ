#include <stdio.h>

int main()
{
  int number;
  int i;
  int j;
  char raw_string[80];
  int count;
  int count_acc;

  i = 0;
  scanf ("%d", &number);
  while (i < number)
  {
    j = 0;
    count = 0;
    count_acc = 0;
    scanf ("%s", raw_string);
    while (raw_string[j] != '\0')
    {
      if (raw_string[j] == 'O' && raw_string[j-1] == 'O')
        {
          count_acc = count_acc + 1;
          count = count + count_ac;
        }
      else if (raw_string[j] == 'O')
        {
          count++;
          count_acc = 1;
        }
      else if (raw_string[j] == 'X')
          count_acc = 0;
      j++;
    }
    printf("%d\n", count);
    i++;
  }
  return (0);
}
