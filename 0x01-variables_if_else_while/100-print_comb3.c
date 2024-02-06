#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
	int c1 = 0;
	int c2 = 1;

	while (c1 < 10)
	{
		while (c2 < 10)
		{
			if (c2 > c1)
			{
			putchar(48 + c1);
			putchar(48 + c2);
			}
			c2++;
			if (c1 != 8 && c2 != 9)
			{
			putchar(',');
			putchar(' ');
			}
		}
		c1++;
	}
	putchar('\n');
	return (0);
}
