#include <stdio.h>

int main()
{
    int n1;
    int n2;

    scanf ("%d %d", &n1, &n2);
    n1 = ((n1 % 10) * 100) + ((n1 % 100) - (n1 % 10)) + (n1 / 100);
    n2 = ((n2 % 10) * 100) + ((n2 % 100) - (n2 % 10)) + (n2 / 100);

    if (n1 > n2)
      printf ("%d", n1);
    else
      printf ("%d", n2);
    return (0);
}
