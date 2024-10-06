/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moleksan <moleksan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 10:37:10 by moleksan          #+#    #+#             */
/*   Updated: 2023/12/07 15:29:02 by moleksan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	int		l;
	char	*str;

	l = 0;
	i = 0;
	while (src[l] != '\0')
		l++;
	str = malloc(sizeof(char) * (l + 1));
	if (str == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

// int main(void) 
// {
//     char *str = "Hello, World!";

//     char *strdup = ft_strdup(str);

//     if (strdup != NULL) 
// 	{

//         printf("Original String: %s\n", str);
//         printf("Duplicated String: %s\n", strdup);

//         free(strdup);
//     } 
// 	else 
// 	{
//         printf("Duplication failed.\n");
//     }
//     return (0);
// }
// The strdup() function allocates sufficient memory for a copy of the
//      string s1, does the copy, and returns a pointer to it.  The pointer may
//      subsequently be used as an argument to the function free(3)
