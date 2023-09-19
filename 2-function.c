#include "main.h"
/**
 * printBinary - the function that print the unsigned value
 *
 * @argu : the number to be printed
 *
 * Return: Nothing
*/
void printBinary(va_list argu)
{
	unsigned int s = va_arg(argu, unsigned int);
	char ch[33] = {'0'}, ch2[33];
	int i = 0, j = 0;

	if (!s)
	handleBuffer(1, ch);
	while (s)
	{
		if (s % 2 == 0)
			ch[i] = '0';
		else
			ch[i] = '1';
		s /= 2, ++i;
	}
	for (; i >= 0; --i, ++j)
		ch2[j] = ch[i];
	ch2[j] = '\0', --j;
	handleBuffer(j, ch2);
}
