/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <hfegrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:55:39 by marvin            #+#    #+#             */
/*   Updated: 2024/11/09 21:20:48 by hfegrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!src && !dest)
		return (dest);
	if (dest < src || dest >= src + n)
	{
		i = 0;
		while (i < n)
		{
			*((unsigned char *)dest + i) = *((unsigned char *)src + i);
			i++;
		}
		return (dest);
	}
	else
	{
		i = n;
		while (i > 0)
		{
			i--;
			*((unsigned char *)dest + i) = *((unsigned char *)src + i);
		}
		return (dest);
	}
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char src[50] = "abcdef";
//     char src1[50] = "abcdef";

//     ft_memmove(src + 2, src, 8);
//     memmove(src1 + 2, src1, 8);

//     puts("\nft_memmove:-");
//     puts(src);
//     puts("\nmemmove:-");
//     puts(src1);
//     return (0);
// }
