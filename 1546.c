#include <stdio.h>

int main()
{
  int num;
  double score[1000];
  int i;
  int index;
  int max;
  float total;
  float avg;

  scanf("%d", &num);
  i = 0;
  while (i < num)
  {
    scanf("%d", &index);
    score[i] = index;
    i++;
  }
  i = 0;
  max = score[0];
  while (i < num)
  {
    if (score[i] > max)
      max = score[i];
    i++;
  }
  i = 0;
  total = 0;
  while (i < num)
  {
    score[i] = (score[i] / max) * 100;
    total = total + score[i];
    i++;
  }
  avg = total / num;
  printf("%f", avg);
  return (0);
}
