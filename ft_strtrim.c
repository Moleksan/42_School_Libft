/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moleksan <moleksan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 11:55:59 by moleksan          #+#    #+#             */
/*   Updated: 2023/12/07 15:30:18 by moleksan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[start]) && start <= end)
		start++;
	if (start > end)
		return (ft_strdup(s1 + end + 1));
	while (ft_strchr(set, s1[end]) && end >= 0)
		end--;
	str = malloc((end - start + 2));
	if (!str)
		return (NULL);
	ft_strlcpy(str, &s1[start], end - start + 2);
	return (str);
}

// int main(void)
// {
//     char *s1 = "abaHello, World!abab";
//     char *set = "ab";
//
//     char *tstr = ft_strtrim(s1, set);
//
//     if (tstr != NULL) 
// 	{
//         printf("Original String: \"%s\"\n", s1);
//         printf("Trimmed String:  \"%s\"\n", tstr);
//
//         free(tstr);
//     } 
// 	else 
// 	{
//         printf("Memory allocation failed.\n");
//     }
//
//     return (0);
// }
