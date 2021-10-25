#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float account, dollar, time, decimal, total;
	while (1)
	{
		printf("Enter account number(-1 to end):");
		scanf_s("%f", &account);
		if (account != -1)
		{
			printf("Enter mortgage amount(in dollars):");
			scanf_s("%f", &dollar);
			printf("Enter mortgage term(in years):");
			scanf_s("%f", &time);
			printf("Enter interest rate (as a decimal):");
			scanf_s("%f", &decimal);
			total = dollar * time * decimal;
			time = time * 12;
			total = (total + dollar) / time;
			printf("The monthly payable interest $ %.0f\n", total);
		}
		else if (account == -1)
		{
			break;
		}
	}
	return 0;
}