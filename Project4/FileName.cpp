#include <stdio.h>

int main()
{
	int a, b, c, d;
	a = 0;
	b = 0;
	c = 0;
	printf("มูภิทย");
	scanf("%d", &d);
	for (a = 0; a < d; a++)
	{
		for (b = a; b < d + 1; b++)
		{
			printf(" ");
		}
		for (c = 0; c <= (a * 2); c++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (a = d-1; a > d; a--)
	{
		
		for (b = a; b <= d; a++)
		{
 			printf(" ");
		}
		for (c = 0; c <=5; c++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}