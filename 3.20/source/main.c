#include <stdlib.h>
#include <stdio.h>

int main()
{
	float sal=0,hour,rate;

	while (sal != -1)
	{
		printf("enter # of hours worked (-1 to end):");
		scanf_s("%f", &hour);
		if (hour == -1) break;
		printf("enter hourly rate of the worker ($00.00):");
		scanf_s("%f", &rate);
		if (hour <= 40)
		{
			printf("salary is :$%.2f\n\n", hour*rate);
		}
		else
		{
			printf("salary is :$%.2f\n\n", 400+(hour-40)*1.5*rate);
		}
	}
}