
#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float a, b;


main()
{
	while (1)
	{
		printf("Enter sales in dollars (-1 to end): ");
		scanf_s("%f", &a);
		if (a == -1)
			break;
		b = a * 0.09 + 200;
		printf("Salary is: $%.2f\n\n", b);
	}

	return 0;
}