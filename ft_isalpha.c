/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:04:04 by marvin            #+#    #+#             */
/*   Updated: 2024/10/26 15:04:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//------DONE-------
#include "libft.h"

int ft_isalpha(int c)
{
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        return (1);
    return (0);
}

// #include <ctype.h>
// int main()
// {
//     printf("ft_isalpha\t==> %d\n", ft_isalpha(48));
//     printf("isalpha\t\t==> %d\n", isalpha(48));
// }