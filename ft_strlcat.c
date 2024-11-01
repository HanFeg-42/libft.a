/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <hfegrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:11:42 by marvin            #+#    #+#             */
/*   Updated: 2024/11/01 10:15:24 by hfegrach         ###   ########.fr       */
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
	if (size <= dstsize)
		return (size + srcsize);
	i = 0;
	while (i < size -dstsize - 1 && src[i])
	{
		dst[dstsize  + i] = src[i];
		i++;
	}
	dst[dstsize + i] = '\0';
	return (dstsize + srcsize + 1);
}
int main()
{
	char dst[30] = "there is no stars in the sky";
	char dst1[30] = "there is no stars in the sky";
	char const *src = "hello";
	size_t size = ft_strlen(src) + ft_strlen(dst);

    size_t a = strlcat(dst, src, size);
    size_t b = ft_strlcat(dst1, src, size);
    printf("strlcat\t\t====>%s| return %zu\n", dst, a);
    printf("ft_strlcat\t====>%s| return %zu\n", dst1, b);
}