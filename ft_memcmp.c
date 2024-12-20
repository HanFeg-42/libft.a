/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <hfegrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 23:29:05 by hfegrach          #+#    #+#             */
/*   Updated: 2024/11/03 23:48:00 by hfegrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	if (!n)
		return (0);
	i = 0;
	while (i < n && *(s1 + i) == *(s2 + i))
	{
		if (i == n - 1)
			return (*(s1 + i) - *(s2 + i));
		i++;
	}
	return (*(s1 + i) - *(s2 + i));
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
