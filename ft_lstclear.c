/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moleksan <moleksan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 18:53:51 by moleksan          #+#    #+#             */
/*   Updated: 2023/12/07 15:25:47 by moleksan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*tmp;

	if (lst == NULL || del == NULL)
		return ;
	current = *lst;
	while (current != NULL)
	{
		tmp = current;
		current = current->next;
		del(tmp->content);
		free(tmp);
	}
	*lst = NULL;
}

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

// void printList(t_list *head)
// {
//     while (head != NULL)
//     {
//         printf("%d ", *(int *)head->content);
//         head = head->next;
//     }
//     printf("\n");
// }

// void deleteInt(void *content)
// {
//     free(content);
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

//     printf("Before clearing:\n");
//     printList(mylist);

//     ft_lstclear(&mylist, deleteInt);

//     printf("After clearing:\n");
//     printList(mylist); 

//     return (0);
// }