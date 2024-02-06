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
	int c1, c2, c3;

	c3 = 2;
	c2 = 1;
	c1 = 0;
	while(c1 <= 7)
	{
		while (c2 <= 8)
		{
			while (c3 <= 9)
			{
				if (c3 > c2 && c2 > 1)
				{
					putchar (c1 + 48);
					putchar (c2 + 48);
					putchar (c3 + 48);
					if (c1 != 7 || c2 != 8 || c3 != 9)
					{
						putchar (' ');
						putchar (',');
					}
				}
				c3+;
			}
			c2++;
		}
		c1++;
		c3 = 2;
		putchar ('\n');
	}

}
