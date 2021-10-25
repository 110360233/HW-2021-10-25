#include<stdio.h>
#include<math.h>

int main(void)
{
	double principal = 5000.0;
	double rate=0.1;
	while (rate < 0.125)
	{
		printf("%4s%21s", "Year", "Amount on deposit");
		printf("   rate = %.3f\n", rate);
		for (unsigned int year = 1; year <= 15; ++year)
		{
			double amount = principal * pow(1.0 + rate, year);
			printf("%4u%21.2f\n", year, amount);
			
		}
		rate += 0.005;
	}
}