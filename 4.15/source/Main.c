#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float i = 5000;
	float p = 0.1;
	float s;
	int j;

	for (j = 1; j < 16; j++)
	{
		s = i + i * p;
		i = i + i * p;
		p = p + 0.005;
	}
	printf("The interest rate is : %f\n",s);

	system("pause");
}