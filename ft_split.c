/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuzun <emuzun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 21:08:27 by emuzun            #+#    #+#             */
/*   Updated: 2024/11/03 21:39:58 by emuzun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *str, char c)
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

static void	free_split(char **str, size_t words)
{
	size_t	i;

	i = 0;
	while (i < words)
		free(str[i++]);
	free(str);
}

static int	split_helper(char ***str, char const *s, t_size_list *a)
{
	(*str)[a->kelime] = ft_substr(s, a->start, a->end - a->start);
	if (!(*str)[a->kelime])
		return (0);
	(a->kelime)++;
	a->start = a->end;
	return (1);
}

static void init_size_list(t_size_list *a)
{
	a->start = 0;
	a->end = 0;
	a->kelime = 0;
}

char	**ft_split(char const *s, char c)
{
	char		**str;
	t_size_list	a;	

	init_size_list(&a);
	if (!s)
		return (NULL);
	str = (char **)ft_calloc((count_words(s, c) + 1), sizeof(char *));
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
			if (!split_helper(&str, s, &a))
				return (free_split(str, a.kelime), NULL);
	}
	return (str);
}
