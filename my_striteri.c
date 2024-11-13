#include "libc.h"

void	my_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		my_f(i, s + i);
		i++;
	}
}
