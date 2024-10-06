/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moleksan <moleksan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 21:56:16 by moleksan          #+#    #+#             */
/*   Updated: 2023/12/07 15:29:20 by moleksan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	size_t	i;
	size_t	j;
	char	*dst;

	i = 0;
	j = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (!s1 || !s2)
		return (NULL);
	dst = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (dst == NULL)
		return (NULL);
	while (i < len1)
		dst[j++] = s1[i++];
	i = 0;
	while (i < len2)
		dst[j++] = s2[i++];
	dst[j] = '\0';
	return (dst);
}

// int main(void) 
// {
//     char *str1 = "Hello, ";
//     char *str2 = "World!";

//     char *res = ft_strjoin(str1, str2);

//     if (res != NULL) 
// 	{
//         printf("Concatenated String: %s\n", res);
//         free(res);
//     }
// 	else 
// 	{
//         printf("String concatenation failed.\n");
//     }
//     return (0);
// }
