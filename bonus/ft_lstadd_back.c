/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:13:42 by marvin            #+#    #+#             */
/*   Updated: 2024/10/28 10:13:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *current;

    current = *lst;
    if (!lst || !new)
        return;
    if (!lst)
        *lst = new;
    while(current)
    {
        if (current->next = NULL)
        {
            current->next = new;
            //new->NULL;
            break;
        }
        current = current->next;
    }
}

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *current;

    if (!lst || !new)
        return;
    if (!lst)
        *lst = new;
    current = *lst;
    current = ft_lstlast(current);
    current->next = new;
}