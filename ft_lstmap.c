/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moleksan <moleksan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 19:12:03 by moleksan          #+#    #+#             */
/*   Updated: 2023/12/07 15:34:45 by moleksan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*cnt;

	if (!lst || !f)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		cnt = f(lst->content);
		new_node = ft_lstnew(cnt);
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			del(cnt);
			return (0);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

// void *mult_two(void *content)
// {
//     int *value = (int *)content;
//     int *result = malloc(sizeof(int));
//     if (!result)
//         return NULL;
//     *result = (*value) * 2;
//     return result;
// }

// void	ft_lstclear(t_list **lst, void (*del)(void *))
// {
// 	t_list	*current;
// 	t_list	*tmp;

// 	if (lst == NULL || del == NULL)
// 		return ;
// 	current = *lst;
// 	while (current != NULL)
// 	{
// 		tmp = current;
// 		current = current->next;
// 		del(tmp->content);
// 		free(tmp);
// 	}
// 	*lst = NULL;
// }

// t_list	*ft_lstnew(void *content)
// {
// 	t_list	*new;

// 	new = malloc(sizeof(t_list));
// 	if (!new)
// 		return (NULL);
// 	new->content = content;
// 	new->next = NULL;
// 	return (new);
// }

// void	ft_lstadd_back(t_list **lst, t_list *new)
// {
// 	t_list	*lstn;

// 	if (*lst == NULL)
// 	{
// 		*lst = new;
// 		return ;
// 	}
// 	lstn = *lst;
// 	while (lstn->next != NULL)
// 	{
// 		lstn = lstn->next;
// 	}
// 	lstn->next = new;
// }

// void free_content(void *content)
// {
//     free(content);
// }
//
// int main(void)
// {
//     t_list *mylist = ft_lstnew((void *)malloc(sizeof(int)));
//     t_list *node1 = ft_lstnew((void *)malloc(sizeof(int)));
//     t_list *node2 = ft_lstnew((void *)malloc(sizeof(int)));
//
//     *(int *)mylist->content = 2;
//     *(int *)node1->content = 3;
//     *(int *)node2->content = 4;
//
//     mylist->next = node1;
//     node1->next = node2;
//     node2->next = NULL;
//
//     t_list *new_list = ft_lstmap(mylist, mult_two, free_content);
//
//     printf("Original List:\n");
//     while (mylist)
//     {
//         printf("%d ", *(int *)mylist->content);
//         mylist = mylist->next;
//     }
//     printf("\n");
//
//     printf("Mapped List:\n");
//     while (new_list)
//     {
//         printf("%d ", *(int *)new_list->content);
//         new_list = new_list->next;
//     }
//     printf("\n");
//
//     ft_lstclear(&mylist, free_content);
//     ft_lstclear(&new_list, free_content);
//     return (0);
// }
