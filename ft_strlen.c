/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 01:29:25 by marvin            #+#    #+#             */
/*   Updated: 2024/10/27 01:29:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *str)
{
    size_t i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

// int main()
// {
//     const char *s = "hello";
//     printf("%d\n",ft_strlen(s));
//     printf("%d\n",strlen(s));
// }