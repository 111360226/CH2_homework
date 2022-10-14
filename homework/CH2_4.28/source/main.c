#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int Pnumber;

main()
{
	float Msalary, Hrate, Wsale, hours, a, b, Aitem, c, MA;
	printf("1.manager  2.hourly worker  3.com-mission worker 4.piece worker\n\n");
	printf("Please input the NO. of position: ");
	scanf_s("%d", &Pnumber);
	switch (Pnumber)
	{
	case 1:
		printf("Enter the manager salary : ");
		scanf_s("%f", &Msalary);
		printf("Salary is $%.2f\n\n", Msalary);
		break;

	case 2:
		printf("Enter # of hours worked : ");
		scanf_s("%f", &hours);
		printf("Enter hourly rate of the worker ($00.00): ");
		scanf_s("%f", &Hrate);
		if (hours > 40)
			a = 400 + (hours - 40)*(Hrate*1.5);
		else
			a = hours * Hrate;
		printf("Salary is $%.2f\n\n", a);
		break;

	case 3:
		printf("Enter weekly gross sales ($00.00): ");
		scanf_s("%f", &Wsale);
		b = 250 + Wsale * 0.057;
		printf("Salary is $%.2f\n\n", b);
		break;

	case 4:
		printf("Enter fixed amount of item : ");
		scanf_s("%f", &Aitem);
		printf("Enter money for amount of item : ");
		scanf_s("%f", &MA);
		c = Aitem * MA;
		printf("Salary is $%.2f\n\n", c);
		break;
	}

	return 0;
}