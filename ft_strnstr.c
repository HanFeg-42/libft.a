/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <hfegrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:08:05 by marvin            #+#    #+#             */
/*   Updated: 2024/10/31 04:49:02 by hfegrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!to_find[i])
		return ((char *)str);
	while (i < n && str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j] && i + j < n)
		{
			j++;
			if (!to_find[j])
				return ((char *)str + i);
		}
		i++;
	}
	return (NULL);
}
/*
	The function returns a pointer to the first 
    characters of str_2 in str_1 or null pointer 
    if str_2 is not found in str_1.

	If str_2 is found as an empty string, str_1 is returned.
*/
// int main()
// {
//     char s[] = "anbla lbher laybher tirararar";
//     char search[] = "bher";

//     char *str = ft_strnstr(s, search, 20);
//     //char *str1 = strnstr(s, search, 10);

//     printf("%s\n",str);
//     //printf("\%s",str1);
// }