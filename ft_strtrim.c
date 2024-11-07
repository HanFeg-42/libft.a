/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <hfegrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:29:49 by marvin            #+#    #+#             */
/*   Updated: 2024/11/04 01:28:05 by hfegrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*ret;
	unsigned int	i;
	unsigned int	start;
	unsigned int	end;
	size_t			len;

	i = 0;
	if (!s1)
		return NULL;
	if (!set)
		return ((char *)s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	start = i;
	i = ft_strlen(s1);
	while (i > start && ft_strchr(set, s1[i]))
		i--;
	end = i;
	len = end - start + 1;
	ret = ft_substr(s1, start, len);
	return (ret);
}
//----------FIRST--------------
// int	is_set(char const *set, char c)
// {
// 	int	i;

// 	i = 0;
// 	while (set[i])
// 	{
// 		if (c == set[i])
// 			return (1);
// 		i++;
// 	}
// 	return (0);
// }

// int	first_occ(char const *s1, char const *set)
// {
// 	int	i;

// 	i = 0;
// 	while (s1[i])
// 	{
// 		if (is_set(set, s1[i]))
// 			i++;
// 		else
// 			break ;
// 	}
// 	return (i);
// }
//int	ret_size(char const *s1, char const *set)
// {
// 	int	len;
// 	int	i;
// 	i = first_occ(s1, set);
// 	len = ft_strlen(s1) - 1;
// 	while (s1[len])
// 	{
// 		if (is_set(set, s1[len]))
// 			len--;
// 		else
// 			break ;
// 	}
// 	return (len - i + 1);
// }
// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	char	*ret;
// 	int		size;
// 	int		i;
// 	int		j;
// 	if (!s1 || !set)
// 		return (NULL);
// 	size = ret_size(s1, set);
// 	ret = malloc(sizeof(char const) * size + 1);
// 	if (!ret)
// 		return (NULL);
// 	i = first_occ(s1, set);
// 	j = 0;
// 	while (j < size)
// 		ret[j++] = s1[i++];
// 	ret[j] = '\0';
// 	return (ret);
// }
//----------MAIN----------
// int	main(void)
// {
// 	//char *s1 = ", ? Hello cv? good.,,? ";
// 	char *s2 = ", ? Hello cv? good.";
// 	char *s3 = "";
// 	char *set = "";
// 	char *s;
// 	s = ft_strtrim("dfhfghffgfgfg", "dg");
// 	char *ss;
// 	ss = ft_strtrim(s2, set);
// 	char *sss;
// 	sss = ft_strtrim(s3, set);
// 	printf("s1\t===> %s\n", s);
// 	printf("s2\t===> %s\n", ss);
// 	printf("s3\t===> %s\n", sss);
// 	return (0);
// }

// -----------other way:----------

// char *ft_strtrim(char const *s1, char const *set)
// {
//     char *ret;
//     int size;
//     int len;
//     int i;
//     int j;

//     i = 0;
//     while (s1[i])
//     {
//         if (is_set(set, s1[i]))
//             i++;
//         else
//             break ;
//     }
//     len = ft_strlen(s1) - 1;
//     while (s1[len])
//     {
//         if (is_set(set, s1[len]))
//             len--;
//         else
//             break ;
//     }
//     size = len - i + 1;
//     size = ret_size(s1, set);
//     ret = malloc(sizeof(char const) * size + 1);
//     if (!ret)
//         return (NULL);
//     j = 0;
//     while (i <= len)// j < size
//         ret[j++] = s1[i++];
//     ret[j] = '\0';
//     return (ret);
// }
