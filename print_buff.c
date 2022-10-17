#include "main.h"
/**
 * print_buff - function that prints buffers
 * @buf: buffer pointer
 * @nbuff: size of buffers
 * Return: returns the size of buffers
 */
int print_buff(char *buf, unsigned int nbuff)
{
	return (write(1, buf, nbuff));
}
