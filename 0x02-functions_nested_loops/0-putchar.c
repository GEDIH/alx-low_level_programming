#include "main.h"
/**
 * main - prints "main"
 *
 * Return: always 0 (Success)
 */
int	main(void)
{
	int		i = 0;
	char	*str = "0-putchar\n";

	while (str[i])
		_putchar(str[i++]);
	return (0);
}
