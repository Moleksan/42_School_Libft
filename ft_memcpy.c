/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moleksan <moleksan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 20:12:30 by moleksan          #+#    #+#             */
/*   Updated: 2023/12/07 15:27:50 by moleksan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = -1;
	if (dst == NULL && src == NULL)
		return (0);
	while (++i < n)
		((char *)dst)[i] = ((char *)src)[i];
	return (dst);
}

// int main() 
// {
//     char src[] = "helloworld1245";
//     char dest[20];

//     ft_memcpy(dest, src, strlen(src) + 1);

//     printf("Source: %s\n", src);
//     printf("Destination: %s\n", dest);

//     return 0;
// }
