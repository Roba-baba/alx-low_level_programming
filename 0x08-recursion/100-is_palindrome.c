include "main.h"

/**
 * find_strlen - Returns length of a string
 * s: The string being measured
 *
 * Return: The length of the string
 */
int find_strlen(char *s)
{
        int len = 0;

        if (*(s + len))
        {
                len++;
                len += find_strlen(s + len);
        }

        return (len);
}

/**
 * check_palindrome - Checks if a string is a palindrome
 * s: string being checked
 * len: The length of string s
 * index: index of the string being checked
 *
 * Return: 1 If string is a palindrome
 * 0 If string is not a palindrome
 *
 */
int check_palindrome(char *s, int len, int index)
{
        if (s[index] == s[len / 2])
                return (1);

        if (s[index] == s[len - index - 1])
                return (check_palindrome(s, len, index + 1));
        return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * s: The string being checked
 *
 * Return: 1 If the string is a palindrome
 * 0 If the string is not a palindrome
 *
 */
int is_palindrome(char *s)
{
        int index = 0;
        int len = find_strlen(s);
	if (!(*s))
                return (1);

        return (check_palindrome(s, len, index));
}
