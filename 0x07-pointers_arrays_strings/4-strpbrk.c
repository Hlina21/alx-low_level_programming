#include "main.h"

/**
 * _strpbrk - entry point
 * @s: input
 * @accept: input
 * Return: always 0 (success)
 */

char *_strpbrk(char *s, char *accept)
{
	int y;

	while (*s)
	{
		for (y = 0; accept[y]; y++)
		{
			if (*s == accept[y])
				return (s);
		}
		s++;
	}
	return ('\0');
}
