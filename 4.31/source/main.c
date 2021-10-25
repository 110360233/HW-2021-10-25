#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i, j;
	int temp1 = 4;
	int temp2 = 4;
	int temp3,temp4;
	char sign = '*';
	char sign2 = ' ';
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			if ((i <= 4) && (temp1 <= j)&&(j<= temp2))
			{
				printf("%c", sign);
				temp3 = temp1;
				temp4 = temp2;
			}
			else if ((i >= 5) && (temp3 <= j) && (j <= temp4))
			{
				printf("%c", sign);
			}
			else
			{
				printf("%c", sign2);
			}
		}
		temp1--;
		temp2++;
		temp3++;
		temp4--;
		printf("\n");
	}
	return 0;
}
