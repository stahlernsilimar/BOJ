#include <stdio.h>

int main()
{
	int n1;
	int n2;

	n1 = 1;
	n2 = 1;
	while (n1 != 0 && n2 != 0)
	{
		scanf("%d %d", &n1, &n2);
		if (n1 == 0 && n2 == 0)
			break;
		printf("%d\n", n1 + n2);
	}
	return (0);
}
