/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <hfegrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 16:14:57 by hfegrach          #+#    #+#             */
/*   Updated: 2024/11/11 15:16:08 by hfegrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// void upper(unsigned int i, char *c)
// {
// 	i++;
// 	*c = ft_toupper(*c);
// }

// int main()
// {
// 	char *s = ft_strdup("salam wash akhay sat");
// 	ft_striteri(s, upper);
// 	printf("%s", s);
// }
