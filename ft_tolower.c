/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <hfegrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 01:26:06 by marvin            #+#    #+#             */
/*   Updated: 2024/10/31 03:00:19 by hfegrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int ch)
{
	unsigned char	c;

	c = (unsigned char)ch;
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}

// int main()
// {
//     printf("%c\n",ft_tolower('A'));
//     printf("%c\n",tolower('A'));
// }