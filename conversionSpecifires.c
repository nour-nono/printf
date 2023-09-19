#include "main.h"
/**
 * conversionSpecifires - the function that print the unsigned value
 *
 * @ch : the number to be printed
 *
 * Return: true or false
 */
int conversionSpecifires(char ch)
{
	char con[] = {' ', '-', '+', '0', '#'};
	int i = 0;

	for (; i < 5; ++i)
	{
		if (ch == con[i])
			return (1);
	}
	return (0);
}
