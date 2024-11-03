/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuzun <emuzun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:49:06 by emuzun            #+#    #+#             */
/*   Updated: 2024/10/28 15:49:07 by emuzun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stddef.h>

size_t ft_strlcat(char *dst, const char *src, size_t dstsize) 
{
    size_t dst_len = ft_strlen(dst);
    size_t src_len = ft_strlen(src);
    size_t i;
    
    src_len = ft_strlen(src);   
    if (dst_len >= dstsize)
        return dstsize + src_len;

    i = 0;
    while (src[i] != '\0' && dst_len + i < dstsize - 1) {
        dst[dst_len + i] = src[i];
        i++;
    }
    dst[dst_len + i] = '\0';
    return dst_len + src_len;
}
