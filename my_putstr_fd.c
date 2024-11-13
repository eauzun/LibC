#include "libc.h"


void	my_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (s != 0)
	{
		while (s[i])
		{
			my_write(fd, &s[i], 1);
			i++;
		}
	}
}
