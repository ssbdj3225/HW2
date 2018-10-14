#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a;
	float b, c, t, l;

	do
	{
		printf("Enter your account number (-1 to end) : ");
		scanf_s("%d", &a);

		if (a == -1)
			break;

		else
		{
			printf("Enter your beginning balance : ");
			scanf_s("%f", &b);
			printf("Enter your total charges : ");
			scanf_s("%f", &c);
			printf("Enter your total credits : ");
			scanf_s("%f", &t);
			printf("Enter your credit limit : ");
			scanf_s("%f", &l);
		}

		b = b + c - t;

		if (b > l)
		{
			printf("Account : %d\n", a);
			printf("Credit limit : %.2f\n", l);
			printf("Balance : %.2f\n", b);
			printf("Credit Limit Exceeded!!!\n");
		}
		else
		{
			printf("\n");
			continue;
		}
		printf("\n");

	} while ("true");

	system("pause");
}