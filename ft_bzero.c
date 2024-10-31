/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <hfegrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 17:31:32 by hfegrach          #+#    #+#             */
/*   Updated: 2024/10/31 04:28:12 by hfegrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		*((char *)s + i) = 0;
		i++;
	}
}

/*
int	main(void)
{
	char	s[] = "Hello I wanna sleep !";
	char	s1[] = "Hello I wanna sleep !";

	ft_bzero(s, 5);
	bzero(s1, 5);
	printf("s\t===> %s\n", s);
	printf("s1\t===> %s\n", s1);
	return (0);
}
*/

/*You need to cast the void *s to char * to:

Perform pointer arithmetic with a known 
size (1 byte for char).
Dereference the pointer and assign the value 
0 to each byte of the memory block.*/
