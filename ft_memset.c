/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <hfegrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 19:51:04 by marvin            #+#    #+#             */
/*   Updated: 2024/10/31 02:57:50 by hfegrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*((unsigned char *)str + i) = (unsigned char)c;
		i++;
	}
	return ((void *)str);
}

// #include <stdio.h>
// #include <string.h>

// int main() {
    // char s1[35] = "ana b3da mgabla lbher la yrhel";
    // char s2[35] = "ana b3da mgabla lbher la yrhel";
    // char c = 'a';
    // printf("Before :\t %s\n",s1);
    // memset(s1, c, 50);
    // printf("memset :\t %s\n",s1);
    // printf("ft_memset :\t %s\n",s2);
    // ft_memset(s2, c, 50);
    // printf("ft_memset :\t %s\n",s2);
// }

// int main() {
//     int *tab = malloc(sizeof(int) * 5) ;

//     int i;
//     ft_memset(tab, 0, 20);
//     i = 0;
//     while (i < 5)
//     {
//         ft_memset(&tab[i], 1, 1);
//         i++;
//     }
//     i = 0;
//     while (i < 5)
//     {
//         printf("%d", tab[i++]);
//     }
// }