#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int h;
	float r, s;

	do
	{
		printf("Enter # of hourly worked (-1 to end) : ");
		scanf_s("%d", &h);

		if (h != -1)
		{
			printf("Enter hourly rate of the worker ($00.00) : ");
			scanf_s("%f", &r);
			if (h > 40)
			{
				s = r * 40 + (h - 40)*r*1.5;
				printf("Salary is $%.2f\n\n", s);
				continue;
			}
			else
			{
				s = r * h;
				printf("Salary is $%.2f\n\n", s);
				continue;
			}
		}
		else
			break;
	} while ("true");

	system("pause");
}