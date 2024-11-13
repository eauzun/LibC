#include "libc.h"

char	*my_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	last;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	last = my_strlen(s1);
	if (*set == '\0')
		return (my_strdup(s1));
	while (s1[i] && my_strchr(set, s1[i]))
		i++;
	while (last > i && my_strchr(set, s1[last - 1]))
		last--;
	return (my_substr(s1, i, last - i));
}
