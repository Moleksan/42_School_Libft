/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moleksan <moleksan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:55:37 by moleksan          #+#    #+#             */
/*   Updated: 2023/12/07 15:38:12 by moleksan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substr;

	i = 0;
	if (s == NULL)
		return (NULL);
	while (s[i])
		i++;
	if (start > i)
		len = 0;
	if (len > i - start)
		len = i - start;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (substr);
	i = 0;
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

// int main(void) 
// {
//     char str[] = "Hello, World!";
//     int start = 7;
//     size_t ln = 12;

//     char *substr = ft_substr(str, start, ln);

//     if (substr != NULL) {
//         printf("Str: %s\n", str);
//         printf("Substr: %s\n", substr);
//         free(substr);
//     } else {
//         printf("Substr creation failed.\n");
//     }
//     return (0);
// }
// s: The string from which to create the substring. start: 
// The start index of the substring in the string ’s’.
// len: The maximum length of the substring.
// Allocates (with malloc(3))
// and returns a substring from the string ’s’.
// The substring begins at 
// index ’start’ and is of maximum size ’len’.