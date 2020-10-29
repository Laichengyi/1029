#include <stdio.h>
#include <stdlib.h>

int main()
{
	int accnum;
	int beginning;
	int ttch;
	int ttcr;
	int crlim;
	int out;


	while (1)
	{
		printf("Enter account number (-1 to end): ");
		scanf_s("%d", &accnum);
		if (accnum == -1) break;

		printf("Enter beginning balance:");
		scanf_s("%d", &beginning);
		printf("Enter total charges:"); 
		scanf_s("%d", &ttch);
		printf("Enter total credits:");
		scanf_s("%d", &ttcr);
		printf("Enter credit limits:");
		scanf_s("%d", &crlim);

		out = beginning + ttch - ttcr;

		if (out > crlim)
		{
			printf("Account: %d\n",accnum);

			printf("Credit limit: %d\n", crlim);

			printf("Balance %d\n", beginning + ttcr);

			printf("Credit Limit Exceeded.\n");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}