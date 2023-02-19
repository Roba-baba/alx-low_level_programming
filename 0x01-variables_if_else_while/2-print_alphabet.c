#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: returns lower case letters in alphabetical order
 * Return: returns zero to mean a success
*/
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
