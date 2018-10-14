#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a, b, j, k;

	printf("Enter the lenth : ");
	scanf_s("%d",&a);
	printf("Enter the breadth : ");
	scanf_s("%d",&b);

	for (j = 1; j <= a; j++)
	{
		for (k = 1; k <= b; k++)
		{
			if (j == 1 || j == a)
				printf("+");
			else
			{
				if (k == 1 || k == b)
					printf("+");
				else
					printf(" ");
			}
		}
		printf("\n");
	}

	system("pause");
}