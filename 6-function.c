#include "main.h"

void convertUnsignedLongToHex(unsigned long num, int flagChar)
{
	int x, y = (flagChar != 48) ? 16 : 8;
	char c;

	if ((num / y) > 0)
		convertUnsignedLongToHex((num / y), flagChar);
	x = num % y;
	c = (x < 10) ? (x + 48) : (x + flagChar);
	handleBuffer(1, &c);
}

void printAdress(va_list argu)
{
	void *p = va_arg(argu, void *);
	char *st1 = "(nil)", *st2 = "0x";
	unsigned long x;
	if (!p)
	{
		handleBuffer(5, st1);
	}
	else
	{
		x = (unsigned long)p;
		handleBuffer(2, st2);
		convertUnsignedLongToHex(x, 87);
	}
}
