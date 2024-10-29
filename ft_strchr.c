/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 00:37:57 by marvin            #+#    #+#             */
/*   Updated: 2024/10/27 00:37:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//------DONE--------
#include "libft.h"

char *ft_strchr(const char *str, int search_str)
{
    int i;

    i = 0;
    while (*(str + i))
    {
        if (*(str + i) == (char)search_str)
            return ((char *)str + i);
        i++;
    }
    return (NULL); 
}

// int main()
// {
//     const char *str = "hello world!";
//     const char *str1 = "hello world!";
//     char c = 'w';
//     char *x = ft_strchr(str, c);
//     char *y = strchr(str1, c);

//     printf("ft_strchr =>\t%s\n", x);
//     printf("strchr =>\t%s\n", y);
// }