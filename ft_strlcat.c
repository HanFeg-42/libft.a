/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:11:42 by marvin            #+#    #+#             */
/*   Updated: 2024/10/23 17:11:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t dstsize;

    dstsize = ft_strlen(dst);
    if (size < dstsize)
        return (size + ft_strlen(src));
    i = 0;
    while (i < size - 1)
    {
        dst[dstsize + i] = src[i];
        i++;
    }
    return (dstsize + ft_strlen(src));
}
