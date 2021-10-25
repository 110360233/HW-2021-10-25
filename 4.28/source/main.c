#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
	int job;
	float h, mi, p;
	printf("enter number(manager->1;hourly worker->2;mission worker->3;pieceworker->4;end->5)\n");
	scanf_s("%d", &job);
	while (job!=5)
	{
		switch (job)
		{
		case 1:
		
			printf("Your salary is $1000\n");
			break;
		case 2:
		
			printf("input how long you work:");
			scanf_s("%f", &h);
			if (h <= 40)
			{
				printf("Your salary is $%.2f\n",h*5);
			}
			else
			{
				h = h - 40;
				h = h * 5 * 1.5 + 40 * 5;
				printf("Your salary is $%.2f\n", h);
			}
			break;
		
		case 3:
		
			printf("input how many you sale:");
			scanf_s("%f", &mi);
			mi = 250 + mi * 0.057;
			printf("Your salary is $%.2f\n", mi);
			break;
		
		case 4:
		
			printf("input how many you make:");
			scanf_s("%f", &p);
			p = p*0.5;
			printf("Your salary is $%.2f\n", p);
			break;
		
		default:
		
			printf("error input\n");
			break;
		}
		printf("enter number(manager->1;hourly worker->2;mission worker->3;pieceworker->4;end->5)\n");
		scanf_s("%d", &job);
	}
}