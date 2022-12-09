#include <stdio.h>

/**
 * main - prints all possible diffrent combinations of three digits.
 * Return: Always 0 (success)
*/
int main(void)
{
	int i;
	int n;
	int j;

	for (i = 48; i < 58; i++)
	{
		for (n = 48; n < 58; n++)
		{
			if (n > i)
			{
				for (j = 48; j < 58; j++)
				{
					if (j > n)
					{
						putchar(i);
						putchar(n);
						putchar(j);
					         if (i == 55 && n == 56 && j == 57)
						{
							break;
						}

						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
