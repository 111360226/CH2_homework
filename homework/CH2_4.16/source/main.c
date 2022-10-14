#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int i, j;

main()
{
	printf("(A)\n");
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
	printf("\n");


	printf("(B)\n");
	for (i = 1; i <= 10; i++)
	{
		for (j = 10; j >= i; j--)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
	printf("\n");


	printf("(C)\n");
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j < i; j++)
		{
			printf(" ");
		}
		for (j = 10; j >= i; j--)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
	printf("\n");


	printf("(D)\n");
	for (i = 1; i <= 10; i++)
	{
		for (j = 10; j > i; j--)
		{
			printf(" ");
		}
		for (j = 1; j <= i; j++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}









	return 0;
}