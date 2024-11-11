/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <hfegrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:05:59 by marvin            #+#    #+#             */
/*   Updated: 2024/11/09 13:55:36 by hfegrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*a;
	size_t	final_size;

	final_size = nitems * size;
	if (size != 0 && (nitems > SIZE_MAX / size))
        return (NULL);
	a = malloc(final_size);
	if (!a)
		return (NULL);
	a = ft_memset(a, 0, final_size);
	return (a);
}

// int main()
// {
//     char *s;
//     char *s1;

//     s = ft_calloc(0, sizeof(char));
//     s1 = calloc(0, sizeof(char));
//     printf("s\t===> %s\n", s);
//     printf("s1\t===> %s\n", s1);
//     return 0;
// }
	// if (!final_size)
	// 	final_size = 1;