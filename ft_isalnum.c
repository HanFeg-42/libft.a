/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <hfegrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:13:56 by marvin            #+#    #+#             */
/*   Updated: 2024/10/31 01:29:49 by hfegrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 48 && c <= 57))
		return (1);
	return (0);
}

// int main()
// {
//     printf("ft_isalnum\t==> %d\n", ft_isalnum(48));
//     printf("isalnum\t\t==> %d\n", isalnum(48));
// }

// The behavior of isalnum() is undefined if 
// the value of ch is not representable 
// as unsigned char and is not equal to EOF.
