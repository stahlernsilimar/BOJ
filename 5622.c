#include <stdio.h>

int change_num(char *num)
{
  int i;
  int total;

  i = 0;
  total = 0;
  while (num[i] != '\0')
  {
    if ('A' <= num[i] && num[i] <= 'C')
      total = total + 2;
    else if ('D' <= num[i] && num[i] <= 'F')
      total = total + 3;
    else if ('G' <= num[i] && num[i] <= 'I')
      total = total + 4;
    else if ('J' <= num[i] && num[i] <= 'L')
      total = total + 5;
    else if ('M' <= num[i] && num[i] <= 'O')
      total = total + 6;
    else if ('P' <= num[i] && num[i] <= 'S')
      total = total + 7;
    else if ('T' <= num[i] && num[i] <= 'V')
      total = total + 8;
    else if ('W' <= num[i] && num[i] <= 'Z')
      total = total + 9;
    i++;
  }
  return (total + i);
}

int main()
{
  char num[15];
  int time;

  scanf("%s", &num);
  time = change_num(num);
  printf("%d", time);
  return (0);
}
