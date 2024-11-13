#include "libc.h"

void	*my_memmove(void *dst, const void *src, size_t n)
{
	if (!dst && !src)
		return (NULL);
	if (dst <= src)
		return (my_memcpy(dst, src, n));
	else
		while (n--)
			((char *)dst)[n] = ((char *)src)[n];
	return (dst);
}
