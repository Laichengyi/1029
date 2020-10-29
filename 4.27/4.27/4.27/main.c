#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, c,d;
	for (a = 1; a <= 500; a++)
	{
		for (b = 1; b <= 500; b++)
		{
			for (c = 1; c <= 500; c++)
			{
				
				if(a*a == (b * b) + (c * c))
				{ 
					printf("%d %d %d\n", b, c, a);
				}
					
				
			}
		}
		
	}
}