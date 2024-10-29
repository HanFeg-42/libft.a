/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:04:30 by marvin            #+#    #+#             */
/*   Updated: 2024/10/28 10:04:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    t_list *current;

    if (!lst)
        return (NULL);
    current = lst;
    while (current)
    {
        if (current->next == NULL)
            break;
        current = current->next;
    }
    return (current);
}