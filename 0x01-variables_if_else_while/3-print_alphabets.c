#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints a combination of two digits 
 * Return: Returns zero for a success
 */
int main(void)
{
	int k, i;

	for (k = '0'; k <= '9'; k++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			if (k < i)
			{
				putchar(k);
				putchar(i);

				if (k != '8' || (k == '8' && i != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
