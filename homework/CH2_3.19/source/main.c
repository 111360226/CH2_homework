#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


float a, b, c, d;


main()
{
	while (1)
	{
		printf("Enter loan principal (-1 to end): ");
		scanf_s("%f", &a);
		if (a == -1)
			break;
		printf("Enter interest rate: ");
		scanf_s("%f", &b);
		printf("Enter term of the loan in days: ");
		scanf_s("%f", &c);
		d = a * b*c / 365;
		printf("The interest charge is $%.2f", d);
		printf("\n\n");
	}
	return 0;
}