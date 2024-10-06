/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moleksan <moleksan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 21:01:27 by moleksan          #+#    #+#             */
/*   Updated: 2023/12/07 15:32:20 by moleksan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst != NULL && new != NULL)
	{
		new->next = *lst;
		*lst = new;
	}
	if (new != NULL && *lst == NULL)
	{
		*lst = new;
	}
}

// t_list	*ft_lstnew(void *content)
// {
// 	t_list *new = malloc(sizeof(t_list));
// 	if (!new)
// 		return (NULL);
// 	new->content = content;
// 	new->next = NULL;
// 	return (new);
// }

// void printList(t_list *head) 
// {
//     while (head != NULL) 
// 	{
//         printf("%d ", *(int *)head->content);
//         head = head->next;
//     }
//     printf("\n");
// }

// int main(void)
// {
//     t_list *mylist = ft_lstnew((int *)malloc(sizeof(int)));
//     t_list *node1 = ft_lstnew((int *)malloc(sizeof(int)));
//     t_list *node2 = ft_lstnew((int *)malloc(sizeof(int)));
// 	t_list *node3 = ft_lstnew((int *)malloc(sizeof(int)));

// 	*(int *)mylist->content = 2;
//     *(int *)node1->content = 3;
//     *(int *)node2->content = 4;
// 	*(int *)node3->content = 8;

// 	mylist->next = node1;
// 	node1->next = node2;
// 	node2->next = NULL;

//  	printList(mylist);

//     ft_lstadd_front(&mylist, node3);

//     printList(mylist);

// 	free(node3->content);
// 	free(mylist);
// 	free(node1);
// 	free(node2);

//     return (0);
// }