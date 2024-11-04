/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuzun <emuzun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:52:04 by emuzun            #+#    #+#             */
/*   Updated: 2024/11/03 18:02:04 by emuzun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	size_int(long nb)
{
	int	count;

	count = 0;
	if (nb < 0)
	{
		nb *= -1;
		count++;
	}
	while (nb >= 10)
	{
		nb /= 10;
		count++;
	}
	count++;
	return (count);
}

static void	execute(long nb, char *c, int *i)
{
	if (nb < 0)
	{
		nb *= -1;
		c[*i] = '-';
		(*i)++;
	}
	if (nb >= 10)
	{
		execute(nb / 10, c, i);
		execute(nb % 10, c, i);
	}
	else
	{
		c[*i] = nb + '0';
		(*i)++;
	}
}

char	*ft_itoa(int n)
{
	long	nb;
	char	*str;
	int		size;
	int		i;

	i = 0;
	nb = n;
	size = size_int(nb);
	str = malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	execute(nb, str, &i);
	str[i] = '\0';
	return (str);
}
