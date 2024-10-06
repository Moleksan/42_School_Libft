/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moleksan <moleksan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 17:13:44 by moleksan          #+#    #+#             */
/*   Updated: 2023/12/07 15:26:17 by moleksan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	diglen(int n)
{
	size_t	cnt;

	cnt = 0;
	if (n <= 0)
		cnt++;
	while (n)
	{
		cnt++;
		n = n / 10;
	}
	return (cnt);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		ln;

	ln = diglen(n);
	str = (char *)malloc(ln + 1);
	if (!str)
		return (NULL);
	str[ln] = '\0';
	if (n == 0)
		str[0] = '0';
	else if (n < 0)
		str[0] = '-';
	while (n)
	{
		if (n < 0)
			str [--ln] = (~(n % 10) + 1) + 48;
		else
			str [--ln] = (n % 10) + 48;
		n /= 10;
	}
	return (str);
}

// int main(void)
// {
// 	int a = -2147483648;

// 	char *str;

// 	str = ft_itoa(a);

// 	printf("%s\n", str);
// 	return (0);
// }