#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float i, p, r;
	int d;

	do
	{
		printf("Enter loan principle (-1 to end) : ");
		scanf_s("%f", &p);

		if (p != -1)
		{
			printf("Enter interest rate : ");
			scanf_s("%f", &r);
			printf("Enter term of the loan in days : ");
			scanf_s("%d", &d);

			i = p * r * d / 365;

			printf("The interest charge is : $%.2f\n\n", i);
			continue;
		}
		else
			break;

	} while ("true");

	system("pause");
}