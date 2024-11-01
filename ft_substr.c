/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <hfegrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:19:50 by marvin            #+#    #+#             */
/*   Updated: 2024/11/01 15:35:04 by hfegrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ret;
	unsigned int	i;

	ret = (char *)malloc(sizeof(char) * len + 1);
	if (!ret)
		return (NULL);
	i = 0;
	while (s[i] && i < len && start <= ft_strlen(s)) 
	{
		ret[i] = s[start + i];
		i++;
	}
	ret[i] = 0;
	return (ret);
}

// int main()
// {
// 	char *s1 = "Hello I wanna sleep !";
// 	char *s;
// 	s = ft_substr(s1, 40, 10);
// 	printf("s1\t===> %s\n", s);
// 	return (0);
// }