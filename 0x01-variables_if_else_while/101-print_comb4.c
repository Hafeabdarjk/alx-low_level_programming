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


	for(c1 = 0; c1 <= 7; c1++)
	{
		for (c2 = c1 + 1; c2 <= 8; c2++)
		{
			for (c3 = c2 +1; c3 <= 9; c3++)
			{
				putchar (48 + c1);
				putchar (48 + c2);
				putchar (48 + c3);
				if (c1 != 7 || c2 != 8 || c3 != 9)
				{
					putchar (',');
					putchar (' ');
				}
			}
		}
	}
	putchar ('\n');
}
