/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <hfegrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:13:35 by marvin            #+#    #+#             */
/*   Updated: 2024/11/01 13:06:33 by hfegrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_elmt;
	t_list	*tmp;

	new_elmt = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		tmp = ft_lstnew(f(lst->content));
		if (!tmp)
		{
			ft_lstclear(&new_elmt, del);
			return (NULL);
		}
		ft_lstadd_back(&new_elmt, tmp);
		lst = lst->next;
	}
	return (new_elmt);
}

int main()
{
	t_list *new;
	char str[] = "hello";

	new = ft_lstnew(str);
	


}


// t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
// {
//     t_list *current;
//     t_list *new;
//     t_list *CURRENT_NEW;

//     if (!lst || !f || !del)
//         return (NULL);
//     current = lst;
//     new = ft_lstnew(f(current->content));
//     CURRENT_NEW = new;
//     if (!CURRENT_NEW)
//     {
//         ft_lstclear(&CURRENT_NEW, del);
//         return (NULL);
//     }
//     current = current->next;
//     while (current)
//     {
//         CURRENT_NEW->next = ft_lstnew(f(current->content));
//         CURRENT_NEW = CURRENT_NEW->next;
//         if (!CURRENT_NEW)
//             ft_lstclear(&CURRENT_NEW, del);
//             return (NULL);
//         current = current->next;
//     }
//     return (new);
// }
