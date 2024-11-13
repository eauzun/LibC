#include "libc.h"

void	*my_calloc(size_t nbyte, size_t size)
{
	void	*dst;

	dst = my_malloc(size * nbyte);
	if (!dst)
		return (0);
	my_bzero(dst, size * nbyte);
	return (dst);
}
