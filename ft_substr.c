/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <hfegrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:19:50 by marvin            #+#    #+#             */
/*   Updated: 2024/10/31 03:00:15 by hfegrach         ###   ########.fr       */
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
	while (s[i] && i < len)
	{
		ret[i] = s[start + i];
		i++;
	}
	ret[i] = 0;
	return (ret);
}

/*int main()
{
	char *s1 = "Hello I wanna sleep !";


	char *s;
	s = ft_substr(s1, 5, 10);
	char *ss;
	ss = ft_substr(s1, 0, 0);
	char *sss;
	sss = ft_substr(s1, 4, 50);
	printf("s1\t===> %s\n", s);
	printf("s2\t===> %s\n", ss);
	printf("s3\t===> %s\n", sss);
	return (0);
}*/