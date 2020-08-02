#include <stdio.h>

int ft_average(int* arr, int num_2)
{
  int total;
  int j;
  double avg;

  j = 0;
  total = 0;
  while (j < num_2)
  {
    total = total + arr[j];
    j++;
  }
  avg = total / num_2;
  return (avg);
}

double ft_ratio(int* arr, int num_2, double avg)
{
  int j;
  double count;
  double ratio;

  j = 0;
  count = 0;
  while (j < num_2)
  {
    if (arr[j] > avg)
      count++;
    j++;
  }
  ratio = (count / num_2) * 100;
  return (ratio);
}

int main()
{
  int num_1;
  int num_2;
  int i;
  int j;
  int index;
  int arr[1000];
  double count;
  double ratio;
  double avg;

  scanf("%d", &num_1);
  i = 0;
  while (i < num_1)
  {
    j = 0;
    scanf("%d", &num_2);
    while (j < num_2)
    {
      scanf("%d", &index);
      arr[j] = index;
      j++;
    }
    avg = ft_average(arr, num_2);
    ratio = ft_ratio(arr, num_2, avg);
    printf ("%.3f%%\n", ratio);
    i++;
  }
  return (0);
}
