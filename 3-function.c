#include "main.h"

/**
 * printUnsigned - the function that print the unsigned value
 *
 * @argu : the number to be printed
 *
 * Return: Nothing
*/

void printUnsigned(va_list argu)
{
	unsigned int num = va_arg(argu, unsigned int), x;
	int i;
	char c;

	x = num;
	for (i = 0; x > 10; i++)
		x /= 10;
	while (i >= 0)
	{
		x = num / _pow(10, i);
		c = (x % 10) + '0';
		handleBuffer(1, &c);
		i--;
	}
}


/**
 * convertUnsignedToHex- the function that convert a number to hexadecimal
 *
 * @num : the number to be converted
 * @flagChar : it determines if 'X' capital or small 'x'
 *
 * Return: Nothing
 */

void convertUnsignedToHex(unsigned int num, char flagChar)
{
	int x, y = (flagChar != 48) ? 16 : 8;
	char c;

	if ((num / y) > 0)
		convertUnsignedToHex((num / y), flagChar);
	x = num % y;
	c = (x < 10) ? (x + 48) : (x + flagChar);
	handleBuffer(1, &c);
}
/**
 * printOctal - the function that prints the octal value
 *
 * @argu : the number to be printed
 *
 * Return: Nothing
*/

void printOctal(va_list argu)
{
	unsigned int n = va_arg(argu, unsigned int);

	convertUnsignedToHex(n, '0');
}

/**
 * printHex - function that print the small hexadecimal number
 * hexadecimal
 *
 * @argu : the number number in decimal
 *
 * Return: Nothing
 */

void printHex(va_list argu)
{
	unsigned int n = va_arg(argu, unsigned int);

	convertUnsignedToHex(n, 'a' - 10);
}

/**
 * printHEX - function that print the capital hexadecimal number
 *
 * @argu : the number number in decimal
 *
 * Return: Nothing
 */

void printHEX(va_list argu)
{
	unsigned int n = va_arg(argu, unsigned int);

	convertUnsignedToHex(n, 'A' - 10);
}
