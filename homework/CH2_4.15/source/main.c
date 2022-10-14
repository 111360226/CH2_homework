#include <math.h>
#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

double amount;
int year;

main()
{
	double principal = 1000.0;
	double rate;
	for (rate = 0.1; rate < 0.121; rate = rate + 0.005)
	{
		printf("%4s%21s\n", "Year", "Amount on desposit");
		for (year = 1; year <= 10; ++year)
		{
			amount = principal * pow(1.0 + rate, year);
			printf("%4u%21.2f\n", year, amount);
		}
		printf("\n");

	}
	system("pause");
	return 0;
}