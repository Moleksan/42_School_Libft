/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moleksan <moleksan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 12:57:11 by moleksan          #+#    #+#             */
/*   Updated: 2023/12/07 15:29:58 by moleksan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		if (s[i] == (char )c)
		{
			return ((char *)(s + i));
		}
		i--;
	}
	return (NULL);
}

// int main(void) 
// {
//     char *str = "Hello, World!";
//     int a = 'o';

//     char *res = ft_strrchr(str, a);

//     if (res != NULL) {
//         printf("'%c' found at position: %ld\n", a, res - str);
//     } else {
//         printf("Character not found\n");
//     }
//     return (0);
// }
// The strrchr() function is identical to strchr(), except it locates the
//      last occurrence of c.
// 	 The strchr() function locates the first occurrence of c (converted to a
//      char) in the string pointed to by s.  The terminating null character is
//      considered to be part of the string; therefore if c is `\0', the func-
//      tions locate the terminating `\0'.