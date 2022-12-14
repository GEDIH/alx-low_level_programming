#include <main.h>
printf _putchar(char c)
{
	return (write(1, &c, 1));
}
