#include <stdio.h>
#include <stdlib.h>

main()
{
	int i, j, k;
	for (i = 0; i <= 4; i++)
	{
		for (j = 0; j <= 3 - i; j++)
		{
			printf(" ");
		}
		for (k = 0; k <= 2 * i; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 0; i <= 3; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		for (k = 0; k <= 6 - 2 * i; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}