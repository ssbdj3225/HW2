#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i, j, k;

	printf("(a)\n");

	for (i = 1; i <= 10; i++)
	{
		for (k = 1; k <= i; k++)
			printf("*");

		printf("\n");
	}

	printf("(b)\n");

	for (i = 1; i <= 10; i++)
	{
		for (k = 1; k <= 11 - i; k++)
			printf("*");

		printf("\n");
	}

	printf("(c)\n");

	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= i - 1; j++)
			printf(" ");
		
		for (k = 1; k <= 11 - i; k++)
			printf("*");
		
		printf("\n");
	}

	printf("(d)\n");

	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= 10-i; j++)
			printf(" ");

		for (k = 1; k <= i; k++)
			printf("*");

		printf("\n");
	}

	system("pause");
}