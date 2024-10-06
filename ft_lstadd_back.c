/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moleksan <moleksan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 11:40:16 by moleksan          #+#    #+#             */
/*   Updated: 2023/12/07 15:32:04 by moleksan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lstn;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	lstn = *lst;
	while (lstn->next != NULL)
	{
		lstn = lstn->next;
	}
	lstn->next = new;
}

// void printList(t_list *head) 
// {
//     while (head != NULL) 
// 	{
//         printf("%d ", (int)head->content);
//         head = head->next;
//     }
//     printf("\n");
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

// int main(void)
// {
//     t_list *mylist = ft_lstnew((void *)2);
//     t_list *node1 = ft_lstnew((void *)3);
//     t_list *node2 = ft_lstnew((void *)4);
// 	t_list *node3 = ft_lstnew((void *)8);

// 	mylist->next = node1;
// 	node1->next = node2;
// 	node2->next = NULL;

// 	printList(mylist);

//     ft_lstadd_back(&mylist, node3);

// 	 printList(mylist);

//     free(mylist);
//     free(node1);
//     free(node2);

//     return (0);
// }