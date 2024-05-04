#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long int N1, N2, next, sum;

	N1 = 1;
	N2 = 2;
	sum = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (N1 < 4000000 && (N1 % 2) == 0)
		{
			sum = sum + N1;
		}
		next = N1 + N2;
		N1 = N2;
		N2 = next;
	}

	printf("%lu\n", sum);

	return (0);
}
