/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <hfegrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:16:41 by hfegrach          #+#    #+#             */
/*   Updated: 2024/10/25 14:28:33 by hfegrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

/*write() system call is used to write to a
 file descriptor. In other words write() can 
 be used to write to any file (all hardware 
 are also referred as file in Linux) in the 
 system but rather than specifying the file 
 name,you need to specify its file descriptor.*/