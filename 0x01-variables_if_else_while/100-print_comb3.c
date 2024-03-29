#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all possible different combinations of
 * only the smallest combination of three digits.
 * Return: 0
 */
int main(void)
{
	int c1 = 0;
	int c2;

	while (c1 < 9)
	{
		while (c2 < 10)
		{
			if (c2 > c1)
			{
				putchar(48 + c1);
				putchar(48 + c2);
				if (c1 != 8 || c2 != 9)
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
