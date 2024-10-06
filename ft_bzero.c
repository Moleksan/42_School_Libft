/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moleksan <moleksan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 19:03:20 by moleksan          #+#    #+#             */
/*   Updated: 2023/12/07 15:26:04 by moleksan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}

// int main(void)
// {
//     int arr[5] = {12, 22, 32, 42, 52};
//     size_t sz = sizeof(arr) / sizeof(arr[0]);

//     printf("Original Array: ");
//     for (size_t i = 0; i < sz; i++) 
//		{
//         printf("%d ", arr[i]);
//		}
//     printf("\n");

//     ft_bzero(arr, sizeof(arr));

//     printf("Array after: ");
//     for (size_t i = 0; i < sz; i++) 
//		{
//         printf("%d ", arr[i]);
//		}
//     printf("\n");

//     char str[10] = "Hello111";
//     size_t size = sizeof(str) - 1; 

//     printf("Original String: %s\n", str);

//     ft_bzero(str, size);

//     printf("String after: %s\n", str);

//     return 0;
// }
// The bzero() function writes n zeroed bytes to the string s.  If n is
// zero, bzero() does nothing.