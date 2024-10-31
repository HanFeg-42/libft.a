/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <hfegrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:40:05 by marvin            #+#    #+#             */
/*   Updated: 2024/10/31 02:57:24 by hfegrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int ch, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)str + i) == (unsigned char)ch)
			return ((void *)str + i);
		i++;
	}
	return (NULL);
}

// int main()
// {
//     char *s1 = "abcdeg";
//     char c = 'd';
//     char *r;
//     char *r2;
//     r = ft_memchr(s1, c, 6);
//     r2 = memchr(s1, c, 6);

//     printf("ft_memchr |%c| is - |%s|\n", c, r);
//     printf("memchr |%c| is - |%s|\n", c, r2);
//     return (0);
// }