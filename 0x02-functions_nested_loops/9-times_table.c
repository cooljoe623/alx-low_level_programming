#include "main.h"

/**
 * times_table - prints times table
 * Return:void
 */

void times_table(void)
{

int i = 0;
int j;
int grid;
while (i <= 9)
{
	j = 0;
	while (j <= 9)
	{
		grid = i * j;
		if (j == 0)
		{
			_putchar('0' + grid);
		}
		else if (grid < 10)
		{
			_putchar(' ');
			_putchar('0' + grid);
		}
		else
		{
			_putchar('0' + grid / 10);
			_putchar('0' + grid % 10);
		}

		if (j < 9)
		{
			_putchar(',');
			_putchar(' ');
		}
		j++;
	}
	_putchar('\n');
	i++;
}

}
