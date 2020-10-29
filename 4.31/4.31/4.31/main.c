#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, sign1, sign2, count = 0;

	a = 5;
	sign1 = a - 1;
	sign2 = sign1;
	for (int i = 0; i <= a * 2 - 1; i++)
	{
		for (int j = 0; j <= a * 2 + 1; j++)
		{
			if ((j >= sign2) && (j <= sign1))
			{
				printf("*");
			}

			else
			{
				printf(" ");
			}
		}
		printf("\n");
		count++;
		if (count < a)
		{
			sign1++;
			sign2--;
		}
		if (count > a)
		{
			sign1--;
			sign2++;
		}
		if (count == a)
		{
			sign1--;
			sign2++;
		}

	}
}