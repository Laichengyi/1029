#include <stdlib.h>
#include <stdio.h>

int main()
{
	float sd;
	float sal;
	float per = 0.09;
	float b = 200;

	while (1)
	{
		printf("Enter sales in dollars (-1 to end ):");
		scanf_s("%f", &sd);

		sal = b + sd * per;

		printf("salary is :$%.2f\n\n", sal);


	}
	system("pause");
	return 0;
}