/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 00:38:51 by marvin            #+#    #+#             */
/*   Updated: 2024/10/27 00:38:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//-----------DONE---------------
#include "libft.h"

char *ft_strdup(const char *str)
{
    char *ret;
    int i;
    
    ret = malloc(sizeof(char) * (ft_strlen(str) + 1));
    if (!ret)
        return (NULL);
    i = 0;
    while (str[i])
    {
        ret[i] = str[i];
        i++;
    }
    ret[i] = '\0';
    return (ret);
}

// int main()
// {
//     const char *str = "hello world!";
//     const char *str1 = "hello world!";

//     printf("ft_strdup =>\t%s\n", ft_strdup(str));
//     printf("strdup =>\t%s\n", strdup(str1));
// }