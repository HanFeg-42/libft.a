/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <hfegrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:07:24 by marvin            #+#    #+#             */
/*   Updated: 2024/10/31 04:42:48 by hfegrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// void del(void *content) {
//     free(content); // Free the pointer
// }

// void ft_print(void *content)
// {
// 	char *s = (char*)content;

// 	printf("%s\n", s);
// }

// int main()
// {
// 	char *s1 = ft_strdup("salam");
// 	char *s2 = ft_strdup("zahia");
// 	t_list *lst = ft_lstnew(s1);
	
// 	ft_lstadd_back(&lst, ft_lstnew(s2));
// 	ft_lstiter(lst, ft_print);
// 	ft_lstclear(&lst, del);
// }