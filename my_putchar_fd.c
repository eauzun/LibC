#include "libc.h"

void	my_putchar_fd(char c, int fd)
{
	my_write(fd, &c, 1);
}
