#include "main.h"

/**
 * main - debugging example
 * Return: 0
 */
int main(void)
{
	char *prnt = "_putchar";

	while (*prnt)
	{
		_putchar(*prnt);
		prnt++;
	}
	_putchar('\n');
	return (0);
}
