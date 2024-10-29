/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <hfegrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 19:56:35 by hfegrach          #+#    #+#             */
/*   Updated: 2024/10/26 22:49:55 by hfegrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    long nbr;

    nbr = n;
    if (nbr < 0)
    {
        ft_putchar_fd('-', fd);
        nbr = -nbr;
    }
    if (nbr > 9)
    ft_putnbr_fd(nbr / 10, fd);
    ft_putchar_fd(nbr % 10 + '0', fd);
}

// int main()
// {
//     ft_putnbr_fd(1337, 1);
//     ft_putnbr_fd(0, 1);
//     ft_putnbr_fd(1, 1);
//     ft_putnbr_fd(-1, 1);
//     ft_putnbr_fd(2147483647, 1);
//     ft_putnbr_fd(-2147483648, 1);
// }