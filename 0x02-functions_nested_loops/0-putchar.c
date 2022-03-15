#include "main.h"

/**
 * main - debugging example
 * Return: 0
 */
int main(void)
{
	char *mains = "mains";

	while (*mains)
	{
		_putchar(*mains);
		mains++;
	}
	_putchar('\n');
	return (0);
}
