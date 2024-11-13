#include "libc.h"

char	*my_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*res;

	if (!s)
		return (NULL);
	i = 0;
	len = my_strlen(s);
	res = my_malloc(my_sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	res[len] = '\0';
	while (s[i])
	{
		res[i] = my_f(i, s[i]);
		i++;
	}
	return (res);
}
