#include <unistd.h>


/**
 * _putchar returns character c as an output
 * c is the character that is printed
 * return is successful if 0 is returned
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
} 
