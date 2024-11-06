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

void del(void *content) {
    free(content); // Free the pointer
}

void f(void *content)
{
    char *str = (char *)content;
    char **new_str = (char **)ft_strdup(str);  // Create a copy of the string

    for (int i = 0; new_str[i]; i++) {exit(0);
        new_str[i] = (unsigned char)ft_toupper((unsigned char)new_str[i]);  // Convert each character to uppercase
    }
}

int main()
{
	t_list *tmp;
	char *s1 = ft_strdup("salam");
	char *s2 = ft_strdup("zahia");

	t_list *lst = ft_lstnew(s1);
	ft_lstadd_back(&lst, ft_lstnew(s2));
	ft_lstiter(lst, f);
	tmp = lst;
	while(tmp)
	{
		printf("%s\n", (char*)(tmp->content));
		tmp = tmp->next;
	}
	ft_lstclear(&lst, del);
}

// void f(void *s)
// {
//     char **ret = (char **)s;
//     *ret = malloc(sizeof(char) * 5);
//     if (*ret)
//         strcpy(*ret, "wach");
// }
// //pass the adress of lst->content if u wanna change content to "wach";
// int main()
// {

//     t_list *new = malloc(sizeof(t_list));
//     new->content = "wach_new";
//     new->next = NULL;
//     ft_lstiter(new, f);
//     printf("%s\n", new->content);

//     return (0);
// }