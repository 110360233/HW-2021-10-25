#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float sale, give;
	while (1)
	{
		printf("Enter sales in dollars(-1 to end):");
		scanf_s("%f", &sale);
		if (sale != -1)
		{
			give = sale * (0.09) + 200;
			printf("Salary is %.2f\n", give);
		}
		else
		{
			break;
		}
	}
	return 0;
}