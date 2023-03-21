#include "main.h"
/**
 * _islower - function to check for lowercase character
 * @i: it's the int that check if the condition is met
 * Return: 1 (success, condition met) 0 (False, condition not met)
 */
int _islower(int i)
{
	if (i >= 'a' && i <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
