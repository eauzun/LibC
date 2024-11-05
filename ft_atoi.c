/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuzun <emuzun@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 01:55:50 by emuzun            #+#    #+#             */
/*   Updated: 2024/11/04 12:30:13 by emuzun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
	size_t	i;
	int		sign;
	int		res;

	res = 0;
	i = 0;
	sign = 1;
	while (str[i] && (str[i] == ' ' || (str[i] > 8 && str[i] < 14)))
		i++;
	if (str[i] && (str[i] == '-' || str[i] == '+'))
		if (str[i++] == '-')
			sign = -sign;
	while (str[i] && str[i] >= 48 && str[i] <= 57)
		res = (res * 10) + ((str[i++] - 48) * sign);
	return (res);
}
