/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moleksan <moleksan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 21:08:12 by moleksan          #+#    #+#             */
/*   Updated: 2023/12/07 15:29:47 by moleksan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	if (!n)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// int main() {
//     char *str1 = "Hello, World!";
//     char *str2 = "Hella, Universe!";
//     int n = 7;
//     int res = ft_strncmp(str1, str2, n);

//     if (res == 0) 
// 	{
//         printf("The first %d characters are equal.\n", n);
//     } 
// 	else if (res < 0) 
// 	{
//         printf("The first %d characters of str1 less than str2.\n", n);
//     } 
// 	else 
// 	{
//         printf("The first %d characters of str1 greater than str2.\n", n);
//     }
//     return (0);
// }
// The strcmp() and strncmp() functions lexicographically compare the null-
//      terminated strings s1 and s2.
//      The strncmp() function compares not more than n characters.  Because
//      strncmp() is designed for comparing strings rather than binary data,
//      characters that appear after a `\0' character are not compared.
// The strcmp() and strncmp() functions return an integer greater than,
//      equal to, or less than 0, according as the string s1 is greater than,
//      equal to, or less than the string s2.
