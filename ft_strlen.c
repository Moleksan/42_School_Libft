/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moleksan <moleksan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 10:24:37 by moleksan          #+#    #+#             */
/*   Updated: 2023/12/03 18:55:00 by moleksan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	char	str[] = "1234567891234567891234567891234567891211";

// 	int a = ft_strlen(str);
// 	printf("lenghts of string is %d\n", a);
// 	return (0);
// }
// The strlen() function computes the length of the string s. 
// The strlen() function returns the number of characters that precede the
// terminating NUL character