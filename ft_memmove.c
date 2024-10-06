/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moleksan <moleksan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 15:38:35 by moleksan          #+#    #+#             */
/*   Updated: 2023/12/07 15:27:54 by moleksan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*dstp;
	unsigned const char	*srcp;

	dstp = dst;
	srcp = src;
	if (dstp == NULL && srcp == NULL)
		return (0);
	if (dstp < srcp)
	{
		while (n--)
			*dstp++ = *srcp++;
	}
	else
	{
		while (n--)
		{
			dstp[n] = srcp[n];
		}
	}
	return (dst);
}

// int main() {
//     char src[] = "hellooooWorld";
//     char dest[20];

//     ft_memmove(dest, src, 14);

//     // Printing the result
//     printf("Source: %s\n", src);
//     printf("Destination: %s\n", dest);

//     return 0;
// }
// The memmove() function copies len bytes from string src to string dst.
// The two strings may overlap; the copy is always done in a non-destructive
// manner.