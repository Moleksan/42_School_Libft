/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moleksan <moleksan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:59:42 by moleksan          #+#    #+#             */
/*   Updated: 2023/12/07 15:28:57 by moleksan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == '\0' && (char)c == 0)
	{
		return ((char *)s);
	}
	return (NULL);
}

// int main() {
//     const char *str = "Hello, World!";
//     int targ = ';';

//     char *res = ft_strchr(str, targ);

//     if (res != NULL) {
//         printf("'%c' found at position: %ld\n", *res, res - str);
//     } else {
//         printf("Character not found\n");
//     }

//     return 0;
// }
