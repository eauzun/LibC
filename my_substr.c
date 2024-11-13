#include "libc.h"

char	*my_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*res;

	if (!s || start >= my_strlen(s))
		return (my_strdup(""));
	if (len > my_strlen(s) - start)
		len = my_strlen(s) - start;
	res = my_malloc(my_sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	i = start;
	j = 0;
	while (s[i] && j < len)
	{
		res[j] = s[i];
		i++;
		j++;
	}
	res[j] = '\0';
	return (res);
}
