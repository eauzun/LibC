/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuzun <emuzun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:45:47 by emuzun            #+#    #+#             */
/*   Updated: 2024/11/03 18:14:24 by emuzun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*des;

	len = ft_strlen(s) + 1;
	des = malloc(sizeof(char) * len);
	if (!des)
		return (NULL);
	return (ft_memcpy(des, s, len));
}
