/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moleksan <moleksan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 12:49:15 by moleksan          #+#    #+#             */
/*   Updated: 2023/12/07 15:28:28 by moleksan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	ln;

	ln = 0;
	while (s[ln] != '\0')
		ln++;
	write(fd, s, ln);
}
// int main(void)
// {
//     char str[] = "hello";
//     int  fd = 2;
//     ft_putstr_fd(str, fd);
// }