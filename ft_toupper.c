/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <hfegrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 01:26:02 by marvin            #+#    #+#             */
/*   Updated: 2024/10/31 22:17:30 by hfegrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int ch)
{
	// unsigned char	c;

	// c = (unsigned char)ch;
	if (ch >= 97 && ch <= 122)
		return (ch - 32);
	return (ch);
}

// int main()
// {
//     printf("%c\n",ft_toupper('A'));
//     printf("%c\n",toupper('A'));
//	   ft_toupper(EOF)
// }