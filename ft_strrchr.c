/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <hfegrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 01:26:35 by marvin            #+#    #+#             */
/*   Updated: 2024/11/01 09:50:28 by hfegrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_strrchr(const char *str, int c)
// {
// 	size_t	i;

// 	i = ft_strlen(str);
// 	while (i > 0)
// 	{
// 		i--;
// 		if (*((unsigned char *)str + i) == (unsigned char)c)
// 			return ((char *)str + i);
// 	}
// 	return (NULL);
// }

char	*ft_strrchr(const char *str, int c)
{
	int i;
	int tmp;
	
	tmp = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			tmp = i;
		i++;
	}
	if (c == '\0')
		return ((char *)str + i);
	if (!tmp)
		return (NULL);
	return ((char *)str + tmp);
}

// int main()
// {
//     const char *str = "hello world!\0\0\0";
//     const char *str1 = "hello world!\0\0\0";
//     char c = '\0';
//     char *x = ft_strrchr(str, c);
//     char *y = strrchr(str1, c);

//     printf("ft_strrchr =>\t%s\n", x);
//     printf("strrchr =>\t%s\n", y);
// }