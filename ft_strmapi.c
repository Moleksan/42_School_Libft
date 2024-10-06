/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moleksan <moleksan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 19:04:41 by moleksan          #+#    #+#             */
/*   Updated: 2023/12/05 21:22:50 by moleksan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;

	i = 0;
	if (!s || !f)
		return (NULL);
	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// char	ft_tolower_map(unsigned int i, char c)
// {
// 	(void) i;
// 	if (c >= 65 && c <= 90)
// 	{
// 		c = (c + 32);
// 	}
// 	return (c);
// }

// int main(void)
// {
// 	char arr[] = "ffejko";

// 	char *res = ft_strmapi(arr, ft_tolower_map);

// 	printf("result = %s\n", res);
// 	return (0);
// }