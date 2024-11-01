/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <hfegrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/2size 15:41:03 by marvin            #+#    #+#             */
/*   Updated: 2024/11/01 14:41:59 by hfegrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	ft_memcmp(const void *str1, const void *str2, size_t n)
// {
// 	size_t	i;

// 	i = 0;
// 	while (i < n)
// 	{
// 		if (*((unsigned char *)str1 + i) > *((unsigned char *)str2 + i))
// 			return (1);
// 		else if (*((unsigned char *)str1 + i) < *((unsigned char *)str2 + i))
// 			return (-1);
// 		i++;
// 	}
// 	return (0);
// }

int ft_memcmp(const void *str1, const void *str2, size_t n)
{
    size_t i;

    if (!n)
        return (0);
    i = 0;
    while (i < n && *((unsigned char *)str1 + i) == *((unsigned char *)str2 + i))
    {
        if (i == n - 1)
            return (*((unsigned char *)str1 + i) - *((unsigned char *)str2 + i));
        i++;
    }
    return (*((unsigned char *)str1 + i) - *((unsigned char *)str2 + i));
}

// int main()
// {
//     char s1[] = "zyxbcdefgh";
//     char s2[] = "abcdefgxyz";
//     int size = 0;
//     int result = ft_memcmp(s1, s2, size);
//     int result1 = memcmp(s1, s2, size);

//     printf("ft_memcmp\t==> %d\n", result);
//     printf("memcmp\t\t==> %d\n", result1);
//     return (0);
// }
