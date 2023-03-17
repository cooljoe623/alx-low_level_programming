#include <stdio.h>
/**
 * main - where execution begins
 *
 * this program prints alphabet in lowercase
 * Return: 0 (success)
 */
int main(void)
{
char i;
for (i = 'a' ; i <= 'z' ; i++)
{
if (i != 'e' && i != 'q')
{
	putchar(i);
}
}
putchar('\n');
return (0);
}
