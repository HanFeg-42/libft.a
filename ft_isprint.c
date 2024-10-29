/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:20:32 by marvin            #+#    #+#             */
/*   Updated: 2024/10/26 15:20:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//------------DONE----------------
#include "libft.h"

int ft_isprint(int c)
{
    if (c >= 32 && c < 127)
        return (1);
    return (0);
}

// #include <ctype.h>
// int main()
// {
//     printf("ft_isprint\t==> %d\n", ft_isprint(48));
//     printf("isprint\t\t==> %d\n", isprint(48));
// }