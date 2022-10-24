#include "main.h"
/**
 * puts2 - print pair values
 * @str: values to be evaluated
 * Return: print
 */
void puts2(char *str)
{
	int i = 0;

	for ( ; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');
}
