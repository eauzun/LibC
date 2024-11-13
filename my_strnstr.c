#include "libc.h"

char	*my_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	n;
	size_t	i;

	if (*needle == '\0')
		return ((char *)haystack);
	n = my_strlen(needle);
	i = 0;
	while (haystack[i] != '\0' && i + n <= len)
	{
		if (my_strncmp(&haystack[i], needle, n) == 0)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
