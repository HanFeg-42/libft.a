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

// void del(void *content) {
//     free(content); // Free the integer pointer
// }

// void *increment(void *content) {
//     if (!content) return NULL;
//     int *new_value = malloc(sizeof(int));
//     if (!new_value) return NULL; // Handle memory allocation failure
//     *new_value = *(int *)content + 1; // Increment the integer
//     return new_value; // Return new incremented value
// }

// int main()
// {
// 	t_list *new;
// 	t_list *current;
// 	t_list *last;
// 	char s1[] = " ana first new ";
// 	char s2[] = " ana add back ";
// 	char s3[] = " ana add front";
// 	char s5[] = " ana last node";
// 	char s4[] = " to be delone";

// 	new = ft_lstnew(s1);
// 	ft_lstadd_back(&new, ft_lstnew(s2));
// 	ft_lstadd_front(&new, ft_lstnew(s3));
// 	ft_lstadd_back(&new, ft_lstnew(s4));
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
// 	// printf("after delone\n");
// 	// current = new;
// 	// while (current)
// 	// {
// 	// 	printf("%s\t", (char*)(current->content));
// 	// 	current = current->next;
// 	// }
// 	// free(new);
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
