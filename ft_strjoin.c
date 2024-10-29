/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:19:47 by marvin            #+#    #+#             */
/*   Updated: 2024/10/23 17:19:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//------------DONE-------------
#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char            *join;
    unsigned int    i;
    unsigned int    j;
    unsigned int    size;

    size = (ft_strlen(s1) + ft_strlen(s2));
    join = (char *)malloc(sizeof(char) * size + 1);
    if(!join)
        return (NULL);
    while (i < ft_strlen(s1))
    {
        join[i] = s1[i];
        i++;
    }
    j = 0;
    while (j < ft_strlen(s2))
    {
        join[i + j] = s2[j];
        j++;
    }
    join[size] = '\0';
    return (join);
}

/*
int main(int ac, char *av[])
{
    char *s;
    if (ac == 3)
    {
        s = ft_strjoin(av[1], av[2]);
        printf("%s\n", s);
    }
    return 0;
}

int main()
{
    char *s1 = "hello ";
    char *s2 = "world!";
    char *s;
    s = ft_strjoin(s1, s2);
    printf("%s\n", s);
    return 0;
}
*/
