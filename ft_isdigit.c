/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:18:50 by marvin            #+#    #+#             */
/*   Updated: 2024/10/26 15:18:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//----------DONE----------------
#include "libft.h"

int ft_isdigit(int c)
{
    if (c >= 48 && c <= 57)
        return (1);
    return (0);
}

// #include <ctype.h>
// int main()
// {
//     printf("ft_isdigit\t==> %d\n", ft_isdigit(48));
//     printf("isdigit\t\t==> %d\n", isdigit(48));
// }