/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moleksan <moleksan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:52:04 by moleksan          #+#    #+#             */
/*   Updated: 2023/12/07 15:27:59 by moleksan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *d, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)d;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (d);
}

// int main() 
// {
//      char  str[5];

//     ft_memset(str, 65, sizeof(str));

// 		for (int i = 0; i < 5; i++) 
// 		{
//         printf("%c", str[i]);
// 		}
//     printf("\n");

//     return 0;
// }

// The memset() function writes len bytes of value c (converted to an
// unsigned char) to the string b.
// The memset() function returns its first argument.