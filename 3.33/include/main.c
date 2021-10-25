#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int length,breadch,i,j;
	char sign = '+';
	char sign2 = ' ';
	while (1)
	{
		printf("please input side length(-1 to end):");
		scanf_s("%d", &length);
		printf("please input side breadch:");
		scanf_s("%d", &breadch);
		if (length != -1)
		{
			for (i = 0; i < breadch; i++)
			{
				for (j = 0; j < length; j++)
				{
					if ((i == 0) || (i == (breadch -1)) || (j == 0) || (j == (length -1)))
					{
						printf("%c", sign);
					}
					else
					{
						printf("%c", sign2);
					}
				}
				printf("\n");
			}
		}
		else
		{
			break;
		}
	}
	return 0;
}