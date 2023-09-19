#include "main.h"
/**
 * printChar - the function that print the unsigned value
 *
 * @argu : the number to be printed
 *
 * Return: Nothing
*/
void printChar(va_list argu)
{
	char c = va_arg(argu, int);

	handleBuffer(1, &c);
}
/**
 * printString - the function that print the unsigned value
 *
 * @argu : the number to be printed
 *
 * Return: Nothing
*/
void printString(va_list argu)
{
	char *st = va_arg(argu, char *);
	int len = 1;

	if (!st)
		st = "(null)";
	len = strlen(st);
	handleBuffer(len, st);
}
/**
 * printPercentage - the function that print the unsigned value
 *
 * Return: Nothing
*/
void printPercentage(void)
{
	char c = '%';

	handleBuffer(1, &c);
}
