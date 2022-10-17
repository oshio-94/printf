#include "main.h"
/**
 * con_char - concatenates the characters
 * @buf: buffer pointer
 * @c: character to join
 * @ibuf: index
 * Return: index
 */
unsigned int con_char(char *buf, char c, unsigned int ibuf)
{
	if (ibuf == 1024)
	{
		print_buff(buf, ibuf);
		ibuf = 0;
	}
	buf[ibuf] = c;
	ibuf++;
	return (ibuf);
}
