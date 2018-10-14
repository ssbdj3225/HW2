#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i, j, k;

	for (i = 1; i < 10; i++)
	{
		if (i<=5)
		{
			for (j = 1; j <= 5 - i; j++)
				printf(" ");
			for (k = 1; k <= 2 * i - 1; k++)
				printf("*");
		}

		else
		{
			for (j = 1; j <= i-5; j++)
				printf(" ");
			for (k = 1; k <= 19 - 2 * i; k++)
				printf("*");
		}

		printf("\n");
	}

	system("pause");
}