/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moleksan <moleksan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 11:34:43 by moleksan          #+#    #+#             */
/*   Updated: 2023/12/07 15:34:01 by moleksan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

// int main(void)
// {
//     t_list *node1 = malloc(sizeof(t_list));
//     node1->content = 10;

//     t_list *node2 = malloc(sizeof(t_list));
//     node2->content = 20;

//     t_list *node3 = malloc(sizeof(t_list));
//     node3->content = 30;

//     node1->next = node2;
//     node2->next = node3;
//     node3->next = NULL;

//     t_list *lastNode = ft_lstlast(node1);

//     if (lastNode != NULL)
//         printf("Last Node: %d\n", lastNode->content);
//     else
//         printf("The list is empty.\n");

//     free(node1);
//     free(node2);
//     free(node3);

//     return (0);
// }