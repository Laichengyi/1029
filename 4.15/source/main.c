#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float a, b=0.1, c, d, e, f;
	printf("��J����:\n");
	scanf_s("%f", &a);

	for (d=0;d<5;d++)
	{
		b = b + 0.005;
		c = a * pow(1 + b, 15);
		printf("���Q�M��:%.2f\n", c);
	}
}