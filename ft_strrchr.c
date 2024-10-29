/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 01:26:35 by marvin            #+#    #+#             */
/*   Updated: 2024/10/27 01:26:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//-----------done----------
#include "libft.h"

char *ft_strrchr(const char *str, int c)
{
    size_t i;

    i = ft_strlen(str);
    while (i > 0)
    {
        i--;
        if (*((unsigned char *)str + i) == (unsigned char)c)
            return ((char *)str + i);
    }
    return (NULL); 
}

// int main()
// {
//     const char *str = "hello world!";
//     const char *str1 = "hello world!";
//     char c = 'w';
//     char *x = ft_strrchr(str, c);
//     char *y = strrchr(str1, c);

//     printf("ft_strrchr =>\t%s\n", x);
//     printf("strrchr =>\t%s\n", y);
// }