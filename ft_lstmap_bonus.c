/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <hfegrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:13:35 by marvin            #+#    #+#             */
/*   Updated: 2024/11/11 06:02:21 by hfegrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_elmt;
	t_list	*tmp;
	void	*err;

	new_elmt = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{	err = f(lst->content);
		tmp = ft_lstnew(err);
		if (!tmp)
		{
			free(err);
			ft_lstclear(&new_elmt, del);
			return (NULL);
		}
		ft_lstadd_back(&new_elmt, tmp);
		lst = lst->next;
	}
	return (new_elmt);
}

// void del(void *content)
// {
// 	free(content);
// }

// void *incr(void *content)
// {
// 	return *content++;
// }

// int main()
// {
// 	int *a1 = malloc(sizeof(int));
// 	int *a2 = malloc(sizeof(int));
// 	int *a3 = malloc(sizeof(int));
// 	int *a4 = malloc(sizeof(int));
// 	int *a5 = malloc(sizeof(int));

// 	*a1 = 1;
// 	*a2 = 2;
// 	*a3 = 3;
// 	*a4 = 4;
// 	*a5 = 5;
	
// 	t_list *s1 = ft_lstnew(a1);
// 	t_list *s2 = ft_lstnew(a2);
// 	t_list *head = ft_lstnew(a3);
// 	t_list *s4 = ft_lstnew(a4);
// 	t_list *s5 = ft_lstnew(a5);
	
// 	ft_lstadd_front(&head, s2);
// 	ft_lstadd_front(&head, s1);
// 	ft_lstadd_back(&head, s4);
// 	ft_lstadd_back(&head, s5);

// 	t_list *tmp;
// 	tmp = head;

// 	while (tmp)
// 	{
// 		printf("%d \t", *(int *)(tmp->content));
// 		tmp = tmp->next;
// 	}

// 	head = ft_lstmap(head, incr, del);
	
// }































// void del(void *content) {
//     free(content); // Free the pointer
// }

// void *f(void *content)
// {
//     char *str = (char *)content;
//     char *new_str = ft_strdup(str);  // Create a copy of the string
//     if (!new_str)
//         return NULL;

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
// 	printf("\n");
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
