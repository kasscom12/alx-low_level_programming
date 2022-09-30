#include "main.h"

/**
 * _strchr - locate character in strinh
 * @s: sourse strin
 * @c: character to find
 *
 * Return: the strig from character found
 */
char *_strchr(char *s, char c)
{
	int a = 0, b:

		while (s[a])
		{
			a++;
		}

	for (b = 0; b <= a; b++0
			{
			if (c == s[b])
			{
			s += b;
			return (s);
			}
			}

			return ('\0');
			}
