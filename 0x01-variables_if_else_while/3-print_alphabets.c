#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints a combination of two digits
 * Return: zero for success
 */
int main(void)
{
	int x, y;

	for (x = '0'; x <= '9'; x++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			if (x < y)
			{
				putchar(x, '\n');
				putchar(y, '\n');

				if (x != '8' || (x == '8' && y != '9'))
				{
					putchar(',');
				}
			}
		}
	}
return (0);
}
