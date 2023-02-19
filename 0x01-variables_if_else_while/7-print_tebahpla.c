#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints reverse alphabets in lowercase
 * Return: returns zero
 */
int main(void)
{
	int a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
