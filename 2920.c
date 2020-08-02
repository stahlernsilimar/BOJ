#include <stdio.h>

int main()
{
  int num[8];
  int i;
  char ret_value;
  int gap;

  i = 0;
  while (i < 8)
  {
    scanf("%d", &num[i]);
    i++;
  }
  i = 1;
  ret_value = 0;
  while (i < 8)
  {
    gap = num[i] - num[i - 1];
    if (gap == 1)
      ret_value = 1;
    else if (gap == -1)
      ret_value = -1;
    else
      {
        printf("mixed");
        return (0);
      }
    i++;
  }
  if (ret_value == 1)
    printf("ascending");
  else if (ret_value == -1)
    printf("descending");
  return (0);
}
