#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("(A)\n");
	int i, j;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//====================================
	printf("(B)\n");
	
	for (i = 0; i < 10; i++)
	{
		for (j = 10; j > i; j--)
		{
			printf("*");
		}
		printf("\n");
	}

	printf("(C)\n");
	
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf(" ");

		}
		for (j = 10; j > i; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("(D)\n");
	
	for (i = 0; i < 10; i++)
	{
		for (j = 10; j > i; j--)
		{
			printf(" ");
		}
		for (j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}