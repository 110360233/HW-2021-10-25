#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float hour,hour2,rate ,give;
	while (1)
	{
		printf("Enter # of hours worked (-1 to end):");
		scanf_s("%f", &hour);
		if (hour != -1)
		{
			printf("Enter hourly rate of the worker ($00.00):");
			scanf_s("%f", &rate);
			if (hour <= 40)
			{
				give = rate * hour;
			}
			else
			{
				give = 40 * rate;
				hour2 = hour - 40;
				give = give + hour2 * rate*1.5;
			}
			printf("Salary is %.2f\n", give);
		}
		else
		{
			break;
		}
	}
	return 0;
}