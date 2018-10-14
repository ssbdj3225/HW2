#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int c, p;
	double r, h, s, t;
	t = 0;

	do
	{
		printf("Enter employee's pay code (-1 to end) : ");
		scanf_s("%d", &c);

		if (c == 1)
		{
			printf("Enter the manager's pay rate : ");
			scanf_s("%lf", &s);
			printf("Weekly pay is : %lf\n\n",s);
			t = t + s;
			continue;
		}
		if (c == 2)
		{
			printf("Enter the hourly pay rate : ");
			scanf_s("%lf", &r);
			printf("Enter the number of hours worked : ");
			scanf_s("%lf", &h);
			if (h <= 40)
			{
				s = h * r;
				printf("Weekly pay is : %lf\n\n", s);
			}
			else
			{
				s = 40 * r + (h - 40) * r * 1.5;
				printf("Weekly pay is : %lf\n\n", s);
			}
			t = t + s;
			continue;
		}
		if (c == 3)
		{
			printf("Enter the gross weekly pay : ");
			scanf_s("%lf", &r);
			s = 250 + 0.057*r;
			printf("Weekly pay is : %lf\n\n", s);
			t = t + s;
			continue;
		}
		if (c == 4)
		{
			printf("Enter the pay rate per piece : ");
			scanf_s("%lf", &r);
			printf("Enter the number of pieces completed : ");
			scanf_s("%d", &p);
			s = p * r;
			printf("Weekly pay is : %lf\n\n", s);
			t = t + s;
			continue;
		}
		if (c == -1)
			break;
		else
			continue;
	} while ("true");

	printf("\nThe total payroll for this week is : $%.2lf\n", t);

	system("pause");
}