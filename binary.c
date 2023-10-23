#include "main.h"

/**
 * printf_bin - prints a binary number
 * @nm: number arguements
 * @c: the printed characters
 * Return: printed charcaters
 */

int printf_bin(unsigned int nm, int c)
{
	int bin[32] = {0};
	int j = 0;

	if (nm == 0)
	{
		_myputchar('0');
		c++;
		return (c);
	}

	while (nm > 0)
	{
		bin[j] = nm % 2;
		nm /= 2;
		j++;
	}

	while (j > 0)
	{
		j--;
		_myputchar('0' + bin[j]);
		c++;
	}

	return(c);
}
