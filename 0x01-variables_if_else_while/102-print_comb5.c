#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints combination of two number 0 to 90
 * Return: zero if successful
 */
int main(void)
{
	int a, b, k, j;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			for (k = 48; k <= 57; k++)
			{
				for (j = 48; j <= 57; j++)
				{
				if (((k + j) > (a + b) &&  k >= a) || a < k)
				{
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(k);
					putchar(j);

					if (a + b + k + j == 227 && a == 57)
					{
					break;
					}
					else
					{
					putchar(',');
					putchar(' ');
					}
				}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
