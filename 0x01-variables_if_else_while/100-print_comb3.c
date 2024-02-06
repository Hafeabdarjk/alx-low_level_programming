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
	int c1;
	int c2;
	c1 = 0;
	while (c1 < 9)
	{
		while (c2 < 10)
		{
			if (c2 > c1)
			{
				putchar(48 + c1);
				putchar(48 + c2);
				if (c1 != 8 && c2 != 9)
				{
				putchar(',');
				putchar(' ');
				}
			}
			c2++;
		}
		c1++;
		c2 = 1;
	}
	putchar('\n');
	return (0);
}
