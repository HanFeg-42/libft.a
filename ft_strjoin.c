/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <hfegrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:19:47 by marvin            #+#    #+#             */
/*   Updated: 2024/10/31 02:58:33 by hfegrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*join;
	unsigned int	i;
	unsigned int	j;
	unsigned int	size;

	size = (ft_strlen(s1) + ft_strlen(s2));
	join = (char *)malloc(sizeof(char) * size + 1);
	if (!join)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s1))
	{
		join[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < ft_strlen(s2))
	{
		join[i + j] = s2[j];
		j++;
	}
	join[size] = '\0';
	return (join);
}

/*
int	main(int ac, char *av[])
{
	char	*s;

	if (ac == 3)
	{
		s = ft_strjoin(av[1], av[2]);
		printf("%s\n", s);
	}
	return (0);
}

int	main(void)
{
	char	*s1;
	char	*s2;
	char	*s;

	s1 = "hello ";
	s2 = "world!";
	s = ft_strjoin(s1, s2);
	printf("%s\n", s);
	return (0);
}
*/
