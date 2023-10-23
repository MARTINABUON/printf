#include "main.h"

/**
 * _y - prints a binary number
 * @nm: number arguements
 * @c: the printed characters
 * @upper: the uppercase equivalent
 * Return: printed charcaters
 */

int _y(unsigned int nm, int c, int upper)
{
	int hexa[100], a = 0, b;

	while (nm != 0)
	{
		int rem = nm % 16;

		if (rem < 10)
		{
			hex[a] = 48 + rem;
		}
		else
		{
			if (upper)
			{
				hexa[a] = 65 + (rem - 10);
			}
			else
			{
				hexa[a] = 97 + (rem - 10);
			}
		}
		a++;
		nm /= 16;
	}
	if (a == 0)
	{
		_myputchar('0');
		c++;
	}
	else
	{
		for (b = a - 1; b >= 0; b--)
		{
			_myputchar(hexa[b]);
			c++;
		}
	}
	return (c);
}
