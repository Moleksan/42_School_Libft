/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moleksan <moleksan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 16:23:31 by moleksan          #+#    #+#             */
/*   Updated: 2023/12/07 15:36:19 by moleksan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	dest_l;
	size_t	src_l;

	dest_l = ft_strlen(dst);
	src_l = ft_strlen(src);
	if (!dst && !n)
		return (src_l);
	if (dest_l >= n)
		return (src_l + n);
	else
		n = n - dest_l;
	ft_strlcpy (dst + dest_l, src, n);
	return (dest_l + src_l);
}

// int main() {
//     // Example usage
//     char dest[20] = "Hello, ";
//     char src[] = "World!";

//     size_t res = ft_strlcat(dest, src, sizeof(dest));

//     printf("Concatenated String: %s\n", dest);
//     return (0);
// }
// strlcat() appends string src to the end of dst.  
// It will append at most
// dstsize - strlen(dst) - 1 characters.
//It will then NUL-terminate, unless
// dstsize is 0 or the original dst string was longer than dstsize (in prac-
// tice this should not happen as it means that either dstsize is incorrect
// or that dst is not a proper string).