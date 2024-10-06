/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moleksan <moleksan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 12:18:11 by moleksan          #+#    #+#             */
/*   Updated: 2023/12/07 15:29:07 by moleksan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// void	to_upper(unsigned int i, char *c)
// {
// 	(void) i;
// 	if (*c >= 97 && *c <= 122)
// 	{
// 		*c = (*c - 32);
// 	}
// }

// int main(void)
// {
// 	char arr[] = "llalalalalalalalalalal";

// 	ft_striteri(arr, to_upper);
// 	printf("array = %s\n", arr);

// }