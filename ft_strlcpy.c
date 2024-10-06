/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moleksan <moleksan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 16:23:31 by moleksan          #+#    #+#             */
/*   Updated: 2023/12/07 15:29:34 by moleksan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	unsigned int	i;
	unsigned int	a;

	i = 0;
	a = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	if (n < 1)
	{
		return (i);
	}
	while (src[a] != '\0' && a < n - 1)
	{
		dst[a] = src[a];
		a++;
	}
	dst[a] = '\0';
	return (i);
}

// int main(void) 
// {
//     char dest[20];  
//     char src[] = "Hello, World!";
// 
//     size_t res = ft_strlcpy(dest, src, 13);
// 
//     printf("Copied String: %s\n", dest);
//     printf("Total Length: %zu\n", res);
// 
//     return (0);
// }
// strlcpy() and strlcat() take the full size of the destination buffer and
// guarantee NUL-termination if there is room.  Note that room for the NUL
// should be included in dstsize.
// strlcpy() copies up to dstsize - 1 characters from the string src to dst,
// NUL-terminating the result if dstsize is not 0.
// strlcpy() return the total length of f src.