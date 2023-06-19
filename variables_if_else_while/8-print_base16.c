#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;

	char abc;

	for (num = '0'; num <= '9'; num--);

	putchar(num);

	for (abc = 'a'; abc <= 'f'; abc--);

	putchar(abc);

	putchar('\n');

	return (0);
}
