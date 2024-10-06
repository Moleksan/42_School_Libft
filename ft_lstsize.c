/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moleksan <moleksan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 11:20:17 by moleksan          #+#    #+#             */
/*   Updated: 2023/12/07 15:35:21 by moleksan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
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

//     int size = ft_lstsize(node1);
//     printf("Size of the list: %d\n", size);

//     free(node1);
//     free(node2);
//     free(node3);

//     return (0);
// }