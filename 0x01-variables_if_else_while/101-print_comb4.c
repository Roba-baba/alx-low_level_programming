#include <stdio.h>

/**
 * main - Prints 3 combination of numbers
 *Description: prints all possible combination of three numbers
 * Return:return zero if successful
 */
int main(void)
{
	int x, z, k;

	for (x = '0'; x <= '9'; x++)
	{
		for (z = '0'; z <= '9'; z++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				if (x < z && z < k)
				{
					putchar(x);
					putchar(z);
					putchar(k);

					if (x != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
