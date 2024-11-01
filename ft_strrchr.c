/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <hfegrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 01:26:35 by marvin            #+#    #+#             */
/*   Updated: 2024/11/01 11:49:43 by hfegrach         ###   ########.fr       */
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
	int a;
	
	tmp = 0;
	a = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			tmp = i;
			a++;
		}
			
		i++;
	}
	if (c == '\0')
		return ((char *)str + i);
	if (!tmp && !a)
		return (NULL);
	return ((char *)str + tmp);
}

// int main()
// {
//     // const char *str = "hello world!\0\0\0";
//     // const char *str1 = "hello world!\0\0\0";
//     // char c = '\0';
//     // char *x = ft_strrchr(str, c);
//     // char *y = strrchr(str1, c);

// 	char *src = "abbbbbbbb";
//  	char *d1 = strrchr(src, 'a');
//  	char *d2 = ft_strrchr(src, 'a');

//     printf("ft_strrchr =>\t%s\n", d2);
//     printf("strrchr =>\t%s\n", d1);
// }