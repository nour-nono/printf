#include "main.h"
/**
 * searchInSpecfires - the function that print the unsigned value
 *
 * @format : the number to be printed
 * @flag : the number to be printed
 * @ptr : the number to be printed
 *
 * Return: Nothing
 */
void searchInSpecfires(char format, int *flag, int *i, int fl, va_list ptr)
{
	placeHolders specifiers[] = {
		{'c', printChar},
		{'s', printString},
		{'d', printInteger},
		{'i', printInteger},
		{'b', printBinary},
		{'u', printUnsigned},
		{'o', printOctal},
		{'x', printHex},
		{'X', printHEX},
		{'S', printVisibleString},
	};
	int j = 0;

	for (; j < 10; ++j)
	{
		if (format == specifiers[j].sp && *flag)
		{
			specifiers[j].funcPtr(ptr), *flag = 0;
			if (fl)
				*i += 1;
			break;
		}
	}
}
