#include "main.h"

/**
 * times_table - print the 9 times table, starting with zero.
 *
 */
void print_times_table(int n)
{
        int i;

        if(n>=0 && n<=15)
	{
	for(i=0; i<=n; i++)
	{
                _putchar('0');
                for (i = 1; i <= n; i++)
                {
                        int result = n * i;

                        _putchar(',');
                        _putchar(' ');
                        (result <= 15) ?
                        _putchar(' ') :
                        _putchar('0' + (result / 10));
                        _putchar('0' + (result % 10));
                }
	}
        _putchar('\n');
        }
}

