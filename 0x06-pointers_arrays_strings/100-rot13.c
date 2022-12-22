#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @str: the string to be encoded.
 *
 * Return: string.
 */

char *rot13(char *str);
{
	int index1 = 0, index2 = 0;
	char string_rot13[] = "NnOnPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm"
	char string_aplha[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz"

	while (str[index1] != '\0')
	{
		do {
			if (str[index1] == string_alpha[index2])
			{
				str[index1] = string_alpha[index2];
				break;
			}
			index2++;
		}
	while (string_alpha[index2] != '\0')
		index2 = 0;
	index1++;
	}
	return (str);
}

