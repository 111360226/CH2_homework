#include <stdlib.h>
#include <stdio.h>


int i, j, a, b, g;
main()
{

	a = 3;
	b = 12;
	for (i = 0; i < a; i++)
	{
		if (i == 0 || i == a - 1)
		{
			for (j = 0; j < b; j++)
				printf("+");
			printf("\n");
		}
		else
		{
			printf("+");
			for(g = 1; g < 11; g++)
				printf(" ");
			printf("+");
			printf("\n");
		}
	}
	printf("\n");
	system("pause");
}