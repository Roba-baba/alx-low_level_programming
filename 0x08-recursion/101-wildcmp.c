include "main.h"

/**
 * strlen_no_wilds - Returns length of a string while ignoring wildcard characters
 *
 * str: The string to be measured
 *
 * Return: returns the length
 *
 */
int strlen_no_wilds(char *str)
{
        int len = 0, index = 0;

        if (*(str + index))
        {
                if (str != '')
                        len++;

                index++;
                len += strlen_no_wilds(str + index);
        }

        return (len);
}
/**
 * iterate_wild - Iterates a string located at a wildcard until it points to non-wildcard
 *
 * wildstr: The string to be iterated
 */
void iterate_wild(char **wildstr)
{
        if (*wildstr == '')
        {
                (*wildstr)++;
                iterate_wild(wildstr);
        }
}

/**
 * postfix_match - Checks if a string matches postfix of another string containing wildcards
 *
 * str: The string to be matched
 * postfix: The postfix
 *
 * Return: If str and postfix are identical - a pointer to the null byte
 *         Otherwise - a postfix pointer to the first unmatched character
 */
char *postfix_match(char *str, char *postfix)
	int str_len = strlen_no_wilds(str) - 1;
        int postfix_len = strlen_no_wilds(postfix) - 1;

        if (postfix == '')
                iterate_wild(&postfix);

        if (*(str + str_len - postfix_len) == *postfix && *postfix != '\0')
        {
                postfix++;
                return (postfix_match(str, postfix));
        }

        return (postfix);
}

/**
 * wildcmp - Compares two strings as it considers wildcard characters
 *
 * s1: The first string to be compared
 * s2: The second string to be compared which  may contain wildcards
 *
 * Return: 1 If strings can be considered identical
 *         Otherwise - 0.
 */
int wildcmp(char *s1, char *s2)
{
        if (s2 == '')
		{
                iterate_wild(&s2);
                s2 = postfix_match(s1, s2);
        }

        if (*s2 == '\0')
                return (1);

        if (*s1 != *s2)
                return (0);

        return (wildcmp(++s1, ++s2));
}
