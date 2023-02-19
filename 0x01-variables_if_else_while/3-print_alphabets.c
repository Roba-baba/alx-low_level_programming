#include <stdio.h>
#include <unistd.h>
/**
 * main - Entyr point
 * Description: prints a combination of two digits
 * Return: returns zero for a success
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		for (c = 'A'; c <= 'Z'; c++)
		{
			putchar(ch);
			putchar(c);
		}
	}
	putchar('\n');
return (0);
}
