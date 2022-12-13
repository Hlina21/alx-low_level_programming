#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number whose last digit is to be printed
 * Return: the last digit of @n
*/

int print_last_digit(int n)
{
	int last_digit = n % 10;

	lat_digit = last_digit < 0 ? -1 * last_digit : last_digit;
	_putchar(last_digit + '0');

	return (last_digit < 0 ? -1 * last_digit : last_digit);
}
