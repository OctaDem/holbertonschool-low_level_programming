#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase,
 *
 * Return: Always 0 (success)
 **/
void print_alphabet_x10(void)
{
	char abc;
	int num = 0;

	while (num <= 9)
	{
		for (abc = 'a'; abc <= 'z'; abc++)
		{
			_putchar(abc);
		}

		_putchar('\n');

		num++;
	}
}

