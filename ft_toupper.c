/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <hfegrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 01:26:02 by marvin            #+#    #+#             */
/*   Updated: 2024/10/31 03:00:24 by hfegrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int ch)
{
	unsigned char	c;

	c = (unsigned char)ch;
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

// int main()
// {
//     printf("%c\n",ft_toupper('A'));
//     printf("%c\n",toupper('A'));
// }