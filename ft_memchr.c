/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moleksan <moleksan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 21:56:19 by moleksan          #+#    #+#             */
/*   Updated: 2023/12/07 15:27:41 by moleksan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	chr;
	size_t			i;

	str = (unsigned char *)s;
	chr = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == chr)
		{
			return (str + i);
		}
		i++;
	}
	return (NULL);
}

// int main() 
// {
//     char str1[] = "Hello, World!";
//     char a = 'o';

//     char *res = ft_memchr(str1, a, 13);
//     if (res != NULL) {
//         printf("Character '%c' found\n", *res);
//     }
// 	else
// 	{
// 		printf("Character '%c' is not found\n", *res);
//     }
//     return (0);
// }
//   The memchr() function locates the first occurrence of c (converted to an
// 	unsigned char) in string s.
// 	The memchr() function returns a pointer to the byte located, or NULL if
//      no such byte exists within n bytes.
