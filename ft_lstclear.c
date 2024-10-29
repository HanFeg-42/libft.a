/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:48:19 by marvin            #+#    #+#             */
/*   Updated: 2024/10/28 10:48:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *current;
    t_list *next;

    if (!lst || !del)
        return ;
    current = *lst;
    while (current)
    {
        next = current->next;
        del(current->content);
        free(current);
        current = next;
    }
    *lst = NULL;
}

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *current;
    t_list *next;

    if (!lst || !del)
        return ;
    current = *lst;
    while (current)
    {
        next = current->next;
        ft_lstdelone(current, del);
        current = next;
    }
    *lst = NULL;
}