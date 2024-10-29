/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:06:07 by marvin            #+#    #+#             */
/*   Updated: 2024/10/26 15:06:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//---------DONE----------
#include "libft.h"

int ft_isascii(int c)
{
    if (c >= 0 && c <= 127)
        return (1);
    return (0);
}

// #include <ctype.h>
// int main()
// {
//     printf("ft_isascii\t==> %d\n", ft_isascii(48));
//     printf("isascii\t\t==> %d\n", isascii(48));
// }