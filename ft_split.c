/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <hfegrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 21:22:18 by marvin            #+#    #+#             */
/*   Updated: 2024/11/09 13:23:35 by hfegrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_countword(char const *s, char c)
{
    int count;
    int i;
    int j;

    count = 0;
    j = 1;
    i = 0;
    while (s[i])
    {
        if (s[i] == c)
            j = 1;
        else if (s[i] != c && j == 1)
        {
            count++;
            j = 0;
        }
        i++;
    }
    return (count);
}

static char **ft_freeme(char **s, int index)
{
    while (index >= 0)
    {
        free(s[index]);
        index--;
    }
    free(s);
    return (NULL);
}

static char **ft_slices(char **ret, char const *s, char c,int a, int i, int j)
{
    int len;

    while (s[i])
    {
        if (s[i] == c)
            j = 1;
        else if (s[i] != c && j == 1)
        {
            len = 0;
            while (s[i + len] && s[i + len] != c)
                len++;
            ret[a] = ft_substr(s, i, len);
            if (!ret[a])
                return (ft_freeme(ret, a));
            a++;
            j = 0;
        }
        i++;
    }
    ret[a] = NULL;
    return (ret);
}

char **ft_split(char const *s, char c)
{
    char **ret;
    int a;
    int i;
    int j;
    
    a = 0;
    j = 1;
    i = 0;
    if (!s)
        return (NULL);
    ret = malloc(sizeof(char *) * (ft_countword(s, c) + 1));
    if (!ret)
        return (NULL);
    ret = ft_slices(ret, s, c, a, i, j);
    return (ret);
}
// static int	ft_countwords(char const *s, char c)
// {
// 	int	count;
// 	int	i;
// 	int	j;

// 	count = 0;
// 	i = 0;
// 	j = 1;
// 	while (s[i])
// 	{
// 		if (s[i] == c)
// 			j = 1;
// 		else if (j == 1 && s[i])
// 		{
// 			count++;
// 			j = 0;
// 		}
// 		i++;
// 	}
// 	return (count);
// }

// static char	*slices(char const *s, char c, int i)
// {
// 	char	*str;
// 	int		j;
// 	int		len;

// 	len = 0;
// 	while (s[i + len] && s[i + len] != c)
// 		len++;
// 	str = malloc(sizeof(char) * len + 1);
// 	if (!str)
// 		return (NULL);
// 	j = 0;
// 	while (s[i] && s[i] != c)
// 	{
// 		str[j++] = s[i++];
// 	}
// 	str[j] = '\0';
// 	return (str);
// }

// char	**ft_split(char const *s, char c)
// {
// 	char	**ret;
// 	int		i;
// 	int		j;
// 	int		a;
	
// 	if (!s)
// 		return (NULL);
// 	ret = malloc(sizeof(char *) * (ft_countwords(s, c) + 1));
// 	if (!ret)
// 		return (NULL);
// 	a = 0;
// 	i = 0;
// 	j = 1;
// 	while (s[i])
// 	{
// 		if (s[i] == c)
// 			j = 1;
// 		else if (j == 1 && s[i])
// 		{
// 			ret[a++] = slices(s, c, i);
// 			j = 0;
// 		}
// 		i++;
// 	}
// 	ret[a] = NULL;
// 	return (ret);
// }

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



// int	main(void)
// {
// 	char	*s;
// 	char	**sp;
// 	int		i;

// 	s = NULL;
// 	sp = ft_split(s, '\0');
// 	if (sp == NULL)
// 	{
// 		printf("Error: ft_split returned NULL\n");
// 		return (1);  // return error code
// 	}
// 	// exit(0);
// 	//printf("%d\nkkk\n", ft_countword(s, '\0'));
// 	i = 0;
// 	while (i < ft_countword(s, '\0'))
// 	{
// 		printf("%s\n", sp[i++]);
// 	}
// 	return (0);
// }
