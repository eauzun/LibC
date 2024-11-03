#include "libft.h"

int count_words(const char *str, char c)
{
	size_t i = 0;
	size_t count = 0;

	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] && str[i] != c)
			i++;
	}
	return count;
}

static void free_split(char **str, size_t words)
{
	size_t i = 0;
	while (i < words)
		free(str[i++]);
	free(str);
}

char **ft_split(char const *s, char c)
{
	char **str;
	size_t word_count;
	size_t start = 0;
	size_t end = 0;
	size_t kelime = 0;

	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	str = (char **)ft_calloc((word_count + 1), sizeof(char *));
	if (!str)
	{
		return (NULL);
	}
		

	while (s[start])
	{
		while (s[start] == c)
			start++;
		end = start;
		while (s[end] && s[end] != c)
			end++;
		if (start < end)
		{
			str[kelime] = ft_substr(s, start, end - start);
			if (!str[kelime++])
			{
				free_split(str, kelime - 1);
				return (NULL);
			}
			start = end;
		}
	}
	return (str);
}



// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   ft_split.c                                         :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: emuzun <emuzun@student.42istanbul.com.t    +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2024/10/28 15:54:18 by emuzun            #+#    #+#             */
// /*   Updated: 2024/11/02 17:19:12 by emuzun           ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #include "libft.h"

// #include "stdio.h"

// int counter(const char *str, char c)
// {
// 	size_t i;
// 	size_t count;

// 	count = 0;
// 	i = 0;
// 	if (str[i] == '\0')
// 		return (0);
// 	while (str[i])
// 	{
// 		while (str[i] == c)
// 			i++;
// 		if (str[i] != '\0')
// 			count++;
// 		while (str[i] && str[i] != c)
// 			i++;
// 	}
// 	return count;
// }


// char **ft_split(char const *s, char c)
// {
// 	char **str;
// 	size_t kelime;
// 	size_t len;
// 	size_t start;
// 	size_t end;
	
// 	kelime = 0;
// 	end = 0;
// 	start = 0;
// 	len = counter(s, c);
// 	str = ft_calloc(sizeof (char *), (len + 1));
// 	if(!str)
// 		return(NULL);
// 	if (!s)
// 		return(NULL);
// 	while(s[start] && s[end])
// 	{
// 		while(s[start] && s[start] == c)		
// 			start++;
// 		end = start;
// 		while (s[end] && s[end] != c)
// 			end++;
// 		if (end - start == 0)
// 			str[kelime] = ft_substr(s, start, 1);
// 		str[kelime] = ft_substr(s, start, end - start);
// 		kelime++;
// 		start = end + 1;
// 		if(s[start] && s[start] == c)
// 		start++;
// 	}
// 	return (str);


/*startı ayırıcıdan sonraki ayırıcı olmayan karaktere kadar yürüt
endi starta eşitle
ayırıcıya kadar endi götür
uzunluğu kullanarak substr yaz 
startı end +1 yapıp startla null ve ayırıcı kontrolü yap 
tekrarla*/
// #include <stdio.h>
// int main()
// {
// 	char a[] = ",,a,ab,,abcd";
// 	char **str = ft_split(a, ',');
// 	printf("%s\n",str[0]);
// 	printf("%s\n",str[1]);
// 	printf("%s\n",str[2]);

// 	free(str[0]);
// 	free(str[1]);
// 	free(str[2]);

// }