#include <stdio.h>

int main()
{
	int n1;
	int n2;
	int n3;
	int i;

	n2 = 0;
	i = 1;
	scanf("%d", &n1);
	n3 = n1;
	n2 = (n3 / 10) + (n3 % 10);
	n3 = ((n3 % 10) * 10) + (n2 % 10);
	while (n3 != n1)
	{
		n2 = (n3 / 10) + (n3 % 10);
		n3 = ((n3 % 10) * 10) + (n2 % 10);
		i++;
	}
	printf ("%d", i);
	return (0);
}
