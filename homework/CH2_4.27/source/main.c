#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float i, j, a;

main()
{
	for (i = 1; i < 500; i++)
	{
		for (j = 1; j < 500; j++)
		{
			a = sqrt(i*i + j * j);
			if (a <= 500)
				printf("side1 is %d , side2 is %d\n", (int)i, (int)j);
			else
				break;
		}
	}

	return 0;
}