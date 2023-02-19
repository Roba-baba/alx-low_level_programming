#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point for the code
 * Description - returns lower case letters in alphabetical order
 * Return - o to mean a succes
*/
int main (void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
