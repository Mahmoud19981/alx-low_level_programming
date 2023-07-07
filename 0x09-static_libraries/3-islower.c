#include "main.h"
/**
 * _islower - function checks character
 * @c: checking input of function
 * Return: 1 if 'c' lowercase otherwise always 0 (success)
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
