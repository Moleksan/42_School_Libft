/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moleksan <moleksan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 10:21:19 by moleksan          #+#    #+#             */
/*   Updated: 2023/12/07 15:27:46 by moleksan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*str1;
	const unsigned char	*str2;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (n--)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

// int main() 
// {
//     char str1[] = "Hello";
//     char str2[] = "Hello";

//     int res1 = ft_memcmp(str1, str2, 5);
//     printf("1: %d\n", res1);

//     char str3[] = "Hello";
// 		char str4[] = "World";

//     int res2 = ft_memcmp(str3, str4, 5);
//     printf("2: %d\n", res2);

//     char str5[] = "Apple";
//     char str6[] = "Appll";

//     int res3 = ft_memcmp(str5, str6, 5);
//     printf("3: %d\n", res3);

//     return 0;
// }
//  The memmove() function copies len bytes from string src to string dst.
// The two strings may overlap; the copy is always done in a non-destructive
// manner.