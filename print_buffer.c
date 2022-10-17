#include "main.h"

/**
 * print_buff - prints buffer
 * @buf: buffer pointer
 * @nbuff: number of bytes to print
 * Return: number of bytes printed.
 */
int print_buff(char *buf, unsigned int nbuff)
{
	return (write(1, buf, nbuff));
}
