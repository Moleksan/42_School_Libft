/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moleksan <moleksan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 11:51:03 by moleksan          #+#    #+#             */
/*   Updated: 2023/12/07 15:39:42 by moleksan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
}

// void delt(void *content) 
// {
//     free(content);
// }

// t_list	*ft_lstnew(void *content)
// {
// 	t_list *new = malloc(sizeof(t_list));
// 	if (!new)
// 		return (NULL);
// 	new->content = content;
// 	new->next = NULL;
// 	return (new);
// }

// int	ft_lstsize(t_list *lst)
// {
// 	int	i;

// 	i = 0;
// 	while (lst)
// 	{
// 		i++;
// 		lst = lst->next;
// 	}
// 	return (i);
// }

// int main(void)
// {
//     t_list *mylist = ft_lstnew((int *)malloc(sizeof(int)));
//     t_list *node1 = ft_lstnew((int *)malloc(sizeof(int)));
//     t_list *node2 = ft_lstnew((int *)malloc(sizeof(int)));

// 	*(int *)mylist->content = 2;
//     *(int *)node1->content = 3;
//     *(int *)node2->content = 4;

// 	mylist->next = node1;
// 	node1->next = node2;
// 	node2->next = NULL;

// 	int sz = ft_lstsize(mylist);

//  	printf("Size of the list B4: %d\n", sz);

// 	ft_lstdelone(node1, delt);

// 	mylist->next = node2;
// 	node2->next = NULL;

// 	int sz1 = ft_lstsize(mylist);
// 	printf("Size of the list After: %d\n", sz1);

// 	free(mylist);
// 	free(node2);

//     return (0);
// }
