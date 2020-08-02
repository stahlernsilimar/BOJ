#include <stdio.h>

int main()
{
	int n1;
	int n2;
	int n3;
	int i;

	scanf("%d %d", &n1, &n2);
	for (i = 0; i < n1; i++)
	{
		scanf("%d", &n3);
		if (n3 < n2)
			printf("%d ", n3);
	}
	return (0);
}
