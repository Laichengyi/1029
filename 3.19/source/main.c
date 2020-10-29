#include <stdio.h>
#include <stdlib.h>

int main()
{
	float loan=0;
	float in;
	float d;
	float ch;

	while (loan!=-1)
	{
		printf("enter loan principal(-1 to end):\n");
		scanf_s("%f", &loan);
		if (loan == -1) break;

		
		
		printf("enter interest rate:\n");
		scanf_s("%f", &in);
		printf("enter term of the loan in days:\n");
		scanf_s("%f", &d);
		ch = loan * in*d / 365;
		printf("the interest charge is:%f\n", ch);

		
	}
	
}