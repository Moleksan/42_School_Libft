/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moleksan <moleksan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 11:37:08 by moleksan          #+#    #+#             */
/*   Updated: 2023/12/07 15:37:10 by moleksan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t			i;
	size_t			j;
	unsigned char	*ht;
	unsigned char	*nd;

	i = 0;
	j = 0;
	ht = (unsigned char *)haystack;
	nd = (unsigned char *)needle;
	if (nd[i] == '\0')
		return ((char *)ht);
	while (ht[i] != '\0' && i < len)
	{
		j = 0;
		while (nd[j] == ht[i + j] && i + j < len)
		{
			if (nd[j + 1] == '\0')
				return ((char *)(ht + i));
			j++;
		}
		i++;
	}
	return (NULL);
}

// int main() 
// {
//     char haystack[] = "Hello, World!";
//     char needle[] = "Warld";

//     char *res = ft_strnstr(haystack, needle, 13);

//     if (res != NULL) {
//         printf("needle found at index: %ld\n", res - haystack);
//     } else {
//         printf("needle not found\n");
//     }
//     return (0);
// }
// The strnstr() function locates the first occurrence of the null-termi-
//      nated string needle in the string haystack, 
//  where not more than len char-
//      acters are searched.  
// Characters that appear after a `\0' character are
//      not searched.
// If needle is an empty string, haystack is returned; 
// if needle occurs
//      nowhere in haystack, 
//  NULL is returned; otherwise a pointer to the first
//      character of the first occurrence of needle is returned.