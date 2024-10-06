/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moleksan <moleksan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 19:04:14 by moleksan          #+#    #+#             */
/*   Updated: 2023/12/07 15:33:31 by moleksan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*current_list;

	current_list = lst;
	if (lst == NULL || f == NULL)
		return ;
	while (current_list != NULL)
	{
		f(current_list->content);
		current_list = current_list->next;
	}
}

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

// void printElem(void *content)
// {
//     printf("%d ", *(int *)content);
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

// int main(void)
// {
//     t_list *mylist = ft_lstnew((int *)malloc(sizeof(int)));
//     t_list *node1 = ft_lstnew((int *)malloc(sizeof(int)));
//     t_list *node2 = ft_lstnew((int *)malloc(sizeof(int)));

//     *(int *)mylist->content = 2;
//     *(int *)node1->content = 3;
//     *(int *)node2->content = 4;

//     mylist->next = node1;
//     node1->next = node2;
//     node2->next = NULL;

//     ft_lstiter(mylist, printElem);

//     ft_lstclear(&mylist, free);

//     return (0);
// }