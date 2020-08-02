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
	if (n1 < 40)
		n1 = 40;
	if (n2 < 40)
		n2 = 40;
	if (n3 < 40)
		n3 = 40;
	if (n4 < 40)
		n4 = 40;
	if (n5 < 40)
		n5 = 40;
	n6 = (n1 + n2 + n3 + n4 + n5) / 5;
	printf ("%d", n6);
	return (0);
}
