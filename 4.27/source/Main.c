#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i, j, k ;

	for (i = 1; i <= 100; i++)
	{
		for (j = 1; j <= 100; j++)
		{
			for (k = 1; k <= 500; k++)
			{
			
				if (i < j && i *i + j * j == k * k)
					printf("%d\t%d\t%d\n", i, j, k);
				
			}
		}
	}
	system("pause");
}