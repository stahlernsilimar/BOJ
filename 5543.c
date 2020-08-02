#include <stdio.h>

int main()
{
	int n1;
	int n2;
	int n3;
	int n4;
	int n5;
	int n6;

	scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
	if (n1 < n2)
		n2 = n1;
	if (n2 < n3)
		n3 = n2;
	if (n4 < n5)
		n5 = n4;
	n6 = n3 + n5 - 50;
	printf ("%d", n6);
	return (0);
}
