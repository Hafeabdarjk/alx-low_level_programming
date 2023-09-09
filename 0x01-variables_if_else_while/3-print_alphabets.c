#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Get a random number and check its last digit, compare it with 5
 * Return: 0
 */
int main(void)
{
	char c_cabital;
	char c_small;

	for (c_cabital = 'a'; c_cabital <= 'z'; c_cabital++)
	{
		putchar(c_cabital);
	}

	for (c_small = 'A'; c_small <= 'Z'; c_small++)
	{
		putchar(c_small);
	}
	putchar('\n');
	return (0);
}
