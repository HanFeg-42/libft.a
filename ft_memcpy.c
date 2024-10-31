/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <hfegrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:48:35 by marvin            #+#    #+#             */
/*   Updated: 2024/10/31 19:53:53 by hfegrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!src && !dest)
		return (dest);
	i = 0;
	while (i < n)
	{
		*((unsigned char *)dest + i) = *((unsigned char *)src + i);
		i++;
	}
	return (dest);
}

// int main ()
// {
//    const char src[20] = "Hello world!";
//    char dest[20];
//    char dest1[20];

//    ft_memcpy(dest, src, strlen(src) + 1);
//    memcpy(dest1, src, strlen(src) + 1);

//    printf("After ft_memcpy dest = %s\n", dest);
//    printf("After memcpy dest1 = %s\n", dest1);
//    return(0);
// }
