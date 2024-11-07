/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <hfegrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 18:23:33 by hfegrach          #+#    #+#             */
/*   Updated: 2024/11/04 01:19:29 by hfegrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dstsize;
	size_t	srcsize;

	dstsize = ft_strlen(dst);
	srcsize = ft_strlen(src);
	if (!dst && size == 0)
		return (srcsize);
	if (size <= dstsize)
		return (size + srcsize);
	i = 0;
	while (i < size - dstsize - 1 && src[i])
	{
		dst[dstsize + i] = src[i];
		i++;
	}
	dst[dstsize + i] = '\0';
	return (dstsize + srcsize);
}
// size_t	ftt_strlen(const char *str)
// {
// 	size_t	i;

// 	i = 0;
// 	if (!str)
// 		return (0);
// 	while (str[i])
// 		i++;
// 	return (i);
// }
// int main()
// {
// 	char dst[30] = "there is no stars in the sky";
// 	char dst1[30] = "there is no stars in the sky";
// 	char const *src = "hello";
// 	size_t size = ft_strlen(src) + ft_strlen(dst) + 1;

//     //size_t a = strlcat(dst, src, size);
//     size_t b = ft_strlcat(dst1, src, size);
//     //printf("strlcat\t\t====>%s| return %zu\n", dst, a);
//     printf("ft_strlcat\t====>%s| return %zu\n", dst1, b);
// }

//and the destination string will not be NUL-terminated
