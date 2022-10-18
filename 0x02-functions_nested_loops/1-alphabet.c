#include "main.h"
/**
 * main - print the alphabet in lowercase.
 *
 * Return:Always 0
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putcher(i);
	}
	_putcher('\n');
}
