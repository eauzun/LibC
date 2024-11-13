#include "libc.h"

char	*my_strdup(const char *s)
{
	size_t	len;
	char	*des;

	len = my_strlen(s) + 1;
	des = my_malloc(my_sizeof(char) * len);
	if (!des)
		return (NULL);
	return (my_memmove(des, s, len));
}
