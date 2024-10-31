/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <hfegrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:05:59 by marvin            #+#    #+#             */
/*   Updated: 2024/10/31 01:28:53 by hfegrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*a;

	if (!size || !nitems)
		return (NULL);
	a = malloc(nitems * size);
	if (!a)
		return (NULL);
	a = ft_memset(a, 0, nitems);
	return (a);
}

/*int main()
{
    char *s;
    char *s1;

    s = ft_calloc(5, sizeof(char));
    s1 = calloc(5, sizeof(char));
    printf("s\t===> %s\n", s);
    printf("s1\t===> %s\n", s1);
    return 0;
}*/
