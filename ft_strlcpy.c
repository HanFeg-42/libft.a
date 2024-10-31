/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <hfegrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:19:36 by marvin            #+#    #+#             */
/*   Updated: 2024/10/31 14:08:12 by hfegrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_size;

	src_size = ft_strlen(src);
	i = 0;
	if (size != 0)
	{
		while (i < size - 1 && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (src_size);
}

// int main()
// {
//     char dst[20] = "";
//     char dst1[20] = "";
//     char src[] = " samah";
//     size_t a = strlcpy(dst, src, 20);
//     size_t b = ft_strlcpy(dst1, src, 20);
//     printf("strlcpy\t====>%s| return %zu\n", dst, a);
//     printf("ft_strlcpy\t====>%s| return %zu\n", dst1, b);
// }