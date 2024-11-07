/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <hfegrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:13:35 by marvin            #+#    #+#             */
/*   Updated: 2024/11/07 10:02:42 by hfegrach         ###   ########.fr       */
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

// void del(void *content) {
//     free(content); // Free the pointer
// }

// void *f(void *content)
// {
//     char *str = (char *)content;
//     char *new_str = ft_strdup(str);  // Create a copy of the string
//     if (!new_str)
//         return NULL;  // Handle memory allocation failure

//     for (int i = 0; new_str[i]; i++) {
//         new_str[i] = ft_toupper((unsigned char)new_str[i]); 
//         // Convert each character to uppercase
//     }
//     return new_str;
// }

// int main()
// {
// 	t_list *map;
// 	t_list *new;
// 	t_list *current;
// 	t_list *tmp;
// 	t_list *last;

// 	char *s1 = ft_strdup(" ana first new ");
// 	char *s2 = ft_strdup(" ana add back ");
// 	char *s3 = ft_strdup(" ana add front");
// 	char *s4 = ft_strdup(" ana last node");
// 	char *s5 = ft_strdup(" to be delone");

// 	new = ft_lstnew(s1); // head
// 	ft_lstadd_back(&new, ft_lstnew(s2));
// 	ft_lstadd_front(&new, ft_lstnew(s3));
// 	ft_lstadd_back(&new, ft_lstnew(s4));
// 	tmp = ft_lstlast(new);
// 	ft_lstadd_back(&new, ft_lstnew(s5));
// 	last = ft_lstlast(new);

// 	printf("last = %s\n", (char*)(last->content));
// 	printf("size = %d\n", ft_lstsize(new)); 
// 	current = new;
// 	while (current)
// 	{
// 		printf("%s\t", (char*)(current->content));
// 		current = current->next;
// 	}
// 	ft_lstdelone(last, del);
// 	tmp->next = NULL;
// 	printf("\n\nafter delone\n");
// 	//ft_lstiter(new, f);
// 	map = ft_lstmap(new, f, del);
// 	current = map;
// 	while (current)
// 	{
// 		printf("%s\t", (char*)(current->content));
// 		current = current->next;
// 	}
// 	ft_lstclear(&new, del);
// }

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
