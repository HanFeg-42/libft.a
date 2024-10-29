/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:41:03 by marvin            #+#    #+#             */
/*   Updated: 2024/10/26 15:41:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//---------DONE----------
#include "libft.h"

int ft_memcmp(const void *str1, const void *str2, size_t n)
{
    size_t i;

    i = 0;
    while (i < n)
    {
        if (*((unsigned char *)str1 + i) > *((unsigned char *)str2 + i))
            return (1);
        else if (*((unsigned char *)str1 + i) < *((unsigned char *)str2 + i))
            return (-1);
        i++;
    }
    return (0);
}

// int main()
// {
//     char s1[] = "abcde";
//     char s2[] = "abcdeg";
//     int result = ft_memcmp(s1, s2, 6);
//     int result1 = memcmp(s1, s2, 6);
    
//     printf("ft_memcmp\t==> %d\n", result);
//     printf("memcmp\t\t==> %d\n", result1);
//     return 0;
// }
