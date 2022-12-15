#include "main.h"

/**
  * _isupper - Check if a letter is upper
  * @x: The number to be checked
  *
  * Return: 1 or 0 for any else
  */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

