#include "main.h"

/**
 * times_table - print the 9 times table, starting with zero.
 *
 */
void print_times_table(int n)
{
        int i;
	int j;

        if(n>=0 && n<=15)
	{
		for(j=0; j<=n; j++){

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

