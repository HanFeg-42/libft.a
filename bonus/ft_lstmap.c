/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:13:35 by marvin            #+#    #+#             */
/*   Updated: 2024/10/28 16:13:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *current;
    t_list *new;
    t_list *nextn;

    if (!lst || !f || !del)
        return (NULL);
    current = lst;
    new = ft_lstnew(f(current->content));
    nextn = new;
    if (!nextn)
    {
        ft_lstclear(&nextn, del);
        return (NULL);
    }  
    current = current->next;
    while (current)
    {
        nextn->next = ft_lstnew(f(current->content));
        nextn = nextn->next;
        if (!nextn)
            ft_lstclear(&nextn, del);
        current = current->next;
    }  
    return (new);
}