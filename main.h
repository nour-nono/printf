#ifndef MAIN_H_
#define MAIN_H_

#include <unistd.h>
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <math.h>

#define buff_size 1024
int _pow(int a, int b);
int handleBuffer(int a, const char *ch);

/*0 task funcs*/
void printPercentage(void);
void printChar(va_list argu);
void printString(va_list argu);
/*1st task function*/
void printInteger(va_list argu);
/*2nd task function*/
void printBinary(va_list argu);
/*3rd task function*/
void printUnsigned(va_list argu);
void printOctal(va_list argu);
void printHex(va_list argu);
void printHEX(va_list argu);
/*4th task function*/

/*5th task function*/
void printVisibleString(va_list argu);

/**
 * struct placeHolders - just struct
 *
 * @sp: a char
 * @funcPtr: pointer to func
 *
*/
struct placeHolders
{
	char sp;
	void (*funcPtr)(va_list);
};
typedef struct placeHolders placeHolders;
void searchInSpecfires(char format, int *flag, int *i, int fl, va_list ptr);
int _printf(const char *format, ...);
#endif
