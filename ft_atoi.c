/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 01:20:52 by marvin            #+#    #+#             */
/*   Updated: 2024/10/26 01:20:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//------------DONE-----------
#include "libft.h"

int ft_atoi(const char *a)
{
    int i;
    int sign;
    int res;

    i = 0;
    sign = 1;
    res = 0;
    while (a[i] == 32 || (a[i] >= 9 && a[i] <= 13))
        i++;
    if (a[i] == '-' || a[i] == '+')
    {
        if (a[i] == '-')
            sign *= -1;
        i++;
    }
    while (a[i] >= '0' && a[i] <= '9')
    {
        res = res * 10 + a[i] - '0';
        i++;
    }
    return (sign * res);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     printf("ft_atoi is %d\n",ft_atoi("123"));
//     printf("atoi is %d\n",atoi("123"));
// }