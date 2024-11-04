/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <hfegrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 00:37:57 by marvin            #+#    #+#             */
/*   Updated: 2024/11/04 00:01:33 by hfegrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != (unsigned char)c)
		s++;
	if (*s == (unsigned char)c)
		return ((char *)s);
	return (NULL);
}

// int main()
// {
//     const char *str = "tes\0te";
//     const char *str1 = "tes\0te";
//     char c = '\0';
//     char * a = ft_strchr(str, c);
//     char * b = strchr(str1, c);

//     printf("ft_strchr =>\t%s\n", a);
//     printf("strchr =>\t%s\n", b);
// }

// int main()
// {
//     const char *s = "teste";
//     s = NULL;
//     const char *s1 = "teste";
//     printf("Hello World\n");
//     printf("ft_ %s ====> %s\n", s, ft_strchr(s, '\0'));
//     printf("%s ====> %s\n", s1, strchr(s1, '\0'));

//     return (0);
// }