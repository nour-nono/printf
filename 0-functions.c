#include "main.h"
/**
 *  _strlen - Entry point
 *
 * @s: is a pointer
 *
 * Description: this program prints "_putchar"
 *
 * Return: Always 0 (Success)
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		++i;
	return (i);
}
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
	len = _strlen(st);
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
