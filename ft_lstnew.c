/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moleksan <moleksan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:15:14 by moleksan          #+#    #+#             */
/*   Updated: 2023/12/07 15:39:17 by moleksan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

// int main(void)
// {
// 	int a = 42;
// 	t_list *newn = ft_lstnew(&a);
// 	t_list ab;
// 	ab.content = "h";
// 	ab.next = NULL;

// 	printf("New node: %c\n", *(char *)ab.content);
// 	free(newn);

// 	return (0);
// }