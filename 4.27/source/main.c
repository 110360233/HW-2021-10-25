#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
	int s1, s2, hy;
	printf("side1  side2  hypotenuse\n");
	for (hy=1;hy<=500;hy++)
	{
		for (s1=1;s1<hy;s1++)
		{
			for (s2=s1+1;s2<hy;s2++)
			{
				if (hy*hy == s1 * s1 + s2 * s2)
				{
					printf("%5d%5d%10d\n",s1,s2,hy);
				}
			}
		}
	}
}