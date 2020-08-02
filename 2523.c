#include <stdio.h>

int main()
{
	int n1;
	int i;
	int j;

	scanf("%d", &n1);
	for (i = 0; i < ((2 * n1) - 1); i++)
	{
		if (i < n1)
		{
			for (j = (n1 - i); j <= n1; j++)
				printf("*");
			printf("\n");
		}
		if (i >= n1)
		{
			for (j = i; j < ((2 * n1) - 1); j++)
				printf("*");
			printf("\n");
		}
	}
	return (0);
}
