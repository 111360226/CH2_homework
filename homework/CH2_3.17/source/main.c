
#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


float a, b, c, d, e, balance, Tcount;



main()
{
	while (1)
	{
		printf("Enter account number(-1 to end): ");
		scanf_s("%f", &a);
		if (a == -1)
		{
			break;
		}
		printf("Enter beginning balance: ");
		scanf_s("%f", &b);
		printf("Enter total charges: ");
		scanf_s("%f", &c);
		printf("Enter total credits: ");
		scanf_s("%f", &d);
		printf("Enter credit limit: ");
		scanf_s("%f", &e);
		Tcount = b + c - d;
		if (e < Tcount)
		{
			printf("Account: %.2f\n", a);
			printf("Credit limit:  %.2f\n", e);
			printf("Balance:  %.2f\n", b + d);
			printf("Credit Limit Exceeded.\n");
		}
		printf(" \n");

	}

	return 0;
}