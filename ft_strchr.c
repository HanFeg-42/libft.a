/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <hfegrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 00:37:57 by marvin            #+#    #+#             */
/*   Updated: 2024/10/31 12:32:09 by hfegrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (*p && *p != c)
		p++;
	if (*p == c)
		return ((char *)p);
	return (NULL);
}

// int main()
// {
//     const char *str = "hello world!";
//     //onst char *str1 = "hello world!";
//     char c = 'w';
//     ft_strchr(str, c);
//     //strchr(str1, c);

// //     printf("ft_strchr =>\t%s\n", x);
// //     printf("strchr =>\t%s\n", y);
// }

// int main()
// {
//     const char *s = "hello";
//     s = NULL;
//     const char *s1 = "hello";
//     printf("Hello World\n");
//     printf("%s ====> %s\n", s, ft_strchr(s, '\0'));
//     printf("%s ====> %s\n", s1, strchr(s1, '\0'));

//     return (0);
// }