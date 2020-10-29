#include <stdlib.h>
#include <stdio.h>

int main()
{
	int a,b,c,d,e,f;
	printf("enter your code:\n");
	scanf_s("%d", &a);
	switch (a)
	{
	case 1:
		printf("Your salary is:$5000\n");
		break;
	case 2:
		printf("Enter your work hour:\n");
		scanf_s("%d", &b);
		if (b <= 40)
		{
			printf("your salary is:%d\n", b * 50);
			break;
		}
		else
		{
			printf("your salary is:%.2f\n", 2000 + (b - 40)*1.5*50);
			break;
		}
	case 3:
		printf("enter your weekly sales:\n");
		scanf_s("%d", &c);
		printf("your salary is:$%.2f\n", 250 + c * 0.057);
		break;
	case 4:
		printf("enter your product number:\n");
		scanf_s("%d", &d);
		printf("your salary is:%d\n", d * 100);
		break;
	}
	
}