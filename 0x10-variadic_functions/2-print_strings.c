#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints strings
 * @n: number of arguments
 * @separator: separator string
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		char *a = va_arg(args, char *);

		if (a != NULL)
			printf("%s", a);
		else
			printf("(nil)");
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
		printf("\n");
		va_end(args);
}

