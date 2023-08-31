#include "main.h"

/**
 * get_endianness - it receieves the endianness
 * Vitaleng
 *
 * Return: 0 if it is a big endian, 1 if it is a little endian
 */
int get_endianness(void)
{
	unsigned int x;
	char *c;

	x = 1;
	c = (char *) &x;

	return ((int)*c);
}
