#include "libc.h"

static size_t	my_count_words(const char *str, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (count);
}

static void	my_free_split(char **str, size_t words)
{
	size_t	i;

	i = 0;
	while (i < words)
		my_free(str[i++]);
	my_free(str);
}

static int	my_split_helper(char ***str, char const *s, t_size_list *a)
{
	(*str)[a->word] = my_substr(s, a->start, a->end - a->start);
	if (!(*str)[a->word])
		return (0);
	(a->word)++;
	a->start = a->end;
	return (1);
}

static void	my_init_size_list(t_size_list *a)
{
	a->start = 0;
	a->end = 0;
	a->word = 0;
}

char	**my_split(char const *s, char c)
{
	char		**str;
	t_size_list	a;	

	my_init_size_list(&a);
	if (!s)
		return (NULL);
	my_init_size_list(&a);
	if (!s)
		return (NULL);
	str = (char **)my_calloc((my_count_words(s, c) + 1), my_sizeof(char *));
	if (!str)
		return (NULL);
	while (s[a.start])
	{
		while (s[a.start] == c)
			a.start++;
		a.end = a.start;
		while (s[a.end] && s[a.end] != c)
			a.end++;
		if (a.start < a.end)
			if (!my_split_helper(&str, s, &a))
				return (my_free_split(str, a.word), NULL);
	}
	return (str);
}
