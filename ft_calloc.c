/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moleksan <moleksan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 11:05:05 by moleksan          #+#    #+#             */
/*   Updated: 2023/12/07 15:26:09 by moleksan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	totl;
	size_t	i;
	void	*ptr;

	i = 0;
	totl = count * size;
	ptr = (int *)malloc(totl);
	if ((size && (totl / size) != count) || ptr == NULL)
		return (NULL);
	while (i < totl)
	{
		((char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}

// int main(void) 
// {
//     int count = 1;
//
//     void *res = ft_calloc(count, sizeof(int));
//
//     if (res != NULL) 
// 	{
//         printf("Memory allocation successful!\n");
//
//         for (size_t i = 0; i < count * sizeof(int); ++i)
// 		{
//             printf("%d ", ((char *)res)[i]);
//         }
// 		printf("\n");
//         free(res);
//     }
// 	else 
// 	{
//         printf("Memory allocation failed.\n");
//     }
//     return (0);
// }
// The calloc() function contiguously allocates enough space for count
//      objects that are size bytes of memory each and returns a pointer to the
//      allocated memory.  The allocated memory is filled with bytes of value
//      zero.
