#include <stdio.h>

int main()
{
	int n1;
	int n2;
	int n3;
	int n4;

	n4 = 0;
	scanf("%d %d %d", &n1, &n2, &n3);
	if (n1 <= n2)
	{
		if (n1 >= n3)
			n4 = n1;
		else if (n2 <= n3)
			n4 = n2;
		else
			n4 = n3;
	}
	else if (n1 >= n2)
	{
		if (n2 >= n3)
			n4 = n2;
		else if (n1 <= n3)
			n4 = n1;
		else
			n4 = n3;
	}
	printf ("%d", n4);
	return (0);
}
