#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */



main()
{
	static float a, b, c;

	while (1)
	{
		printf("Enter # of hours worked (-1 to end): ");
		scanf_s("%f", &a);
		if (a == -1)
			break;
		printf("Enter hourly rate of the worker ($00.00): ");
		scanf_s("%f", &b);
		if (a > 40)
			c = 400 + (a - 40)*(b + b / 2);
		else
			c = a * b;
		printf("Salary is $%.2f\n\n", c);
	}
	return 0;
}