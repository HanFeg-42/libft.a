/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <hfegrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 21:22:18 by marvin            #+#    #+#             */
/*   Updated: 2024/11/08 00:39:15 by hfegrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(char const *s, char c)
{
	int	count;
	int	i;
	int	j;

	count = 0;
	i = 0;
	j = 1;
	while (s[i])
	{
		if (s[i] == c)
			j = 1;
		else if (j == 1 && s[i])
		{
			count++;
			j = 0;
		}
		i++;
	}
	return (count);
}

static char	*slices(char const *s, char c, int i)
{
	char	*str;
	int		j;
	int		len;

	len = 0;
	while (s[i + len] && s[i + len] != c)
		len++;
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	j = 0;
	while (s[i] && s[i] != c)
	{
		str[j++] = s[i++];
	}
	str[j] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**ret;
	int		i;
	int		j;
	int		a;
	
	if (!s)
		return (NULL);
	ret = malloc(sizeof(char *) * (ft_countwords(s, c) + 1));
	if (!ret)
		return (NULL);
	a = 0;
	i = 0;
	j = 1;
	while (s[i])
	{
		if (s[i] == c)
			j = 1;
		else if (j == 1 && s[i])
		{
			ret[a++] = slices(s, c, i);
			j = 0;
		}
		i++;
	}
	ret[a] = NULL;
	return (ret);
}

// SSSSSSSSSPPPPPPPPPPLLLLLLLLLLLIIIIIIIIIIITTTTTTTTTTTT

// int	main(void)
// {
// 	char	*s;
// 	char	**sp;
// 	int		i;

// 	s = "\t\t\t\thello!\t\t\t\t";
// 	sp = ft_split(s, '\t');
// 	// exit(0);
// 	i = 0;
// 	while (i < ft_countwords(s, ' '))
// 	{
// 		printf("%s\n", sp[i++]);
// 	}
// 	return (0);
// }
