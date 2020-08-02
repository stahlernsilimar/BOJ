#include <stdio.h>

int main()
{
  int L;
  int A;
  int B;
  int C;
  int D;
  int lang;
  int math;
  int max;
  int date;

  scanf("%d %d %d %d %d", &L, &A, &B, &C, &D);
  lang = A / C;
  if (A % C != 0)
    lang++;
  math = B / D;
  if (B % D != 0)
    math++;
  if (math <= lang)
    max = lang;
  else if (math > lang)
    max = math;
  date = L - max;
  printf("%d", date);
  return (0);
}
