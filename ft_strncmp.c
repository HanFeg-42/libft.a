/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <hfegrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:07:15 by marvin            #+#    #+#             */
/*   Updated: 2024/11/01 13:36:37 by hfegrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!n)
		return (0);
	while (s1[i] && s2[i] && i < n && s1[i] == s2[i])
	{
		if (i == n - 1)
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;

	}	
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);;
}

// int main()
// {
//     const char *s1 = "abcdefghoo";
//     const char *s2 = "abcdefgzxc";
//     printf("strncmp ======> %d\n", strncmp(s1, s2, 7));
//     printf("ft_strncmp ======> %d\n", ft_strncmp(s1, s2, 7));
// }