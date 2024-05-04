#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, N1, N2, next;

	N1 = 1;

	N2 = 2;

	for (i = 1; i <= 50; ++i)
	{
		if (N1 != 20365011074)
		{
			printf("%d, ", N1);
		} else
		{
			printf("%d\n", N1);
		}
		next = N1 + N2;
		N1 = N2;
		N2 = next;
	}

	return (0);
}
