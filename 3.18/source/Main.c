#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float s, d;
	do
	{

		printf("Enter sales in dollars (-1 to end) : ");
		scanf_s("%f", &d);
		if (d != -1)
		{
			s = d * 0.09 + 200;
			printf("Salary is : $%.2f\n\n", s);
			continue;
		}
		else
			break;
	} while ("true");

	system("pause");
}