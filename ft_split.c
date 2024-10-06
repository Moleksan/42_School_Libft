/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moleksan <moleksan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 11:47:20 by moleksan          #+#    #+#             */
/*   Updated: 2023/12/07 15:28:51 by moleksan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_words(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s != c && ((*(s + 1) == c) || *(s + 1) == '\0'))
		{
			count++;
		}
		s++;
	}
	return (count);
}

static void	freeft(char **tab)
{
	size_t	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

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

static void	ft_allocate(char **tab, char const *s, char sep)
{
	char		**tab_p;
	char const	*tmp;

	tmp = s;
	tab_p = tab;
	while (*tmp)
	{
		while (*s == sep)
			++s;
		tmp = s;
		while (*tmp && *tmp != sep)
			++tmp;
		if (*tmp == sep || tmp > s)
		{
			*tab_p = ft_substr(s, 0, tmp - s);
			if (*tab_p == NULL)
			{
				freeft(tab);
				return ;
			}
			s = tmp;
			++tab_p;
		}
	}
	*tab_p = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	size_t	size;

	if (!s)
		return (NULL);
	size = ft_count_words(s, c);
	new = malloc(sizeof(char *) * (size + 1));
	if (!new)
		return (NULL);
	ft_allocate(new, s, c);
	return (new);
}

// int main(void)
// {
//     char str[] = "hel lo !";
//     char s = ' ';

//     char **strs = ft_split(str, s);

//     size_t a = 0;
//     size_t b = 1;
//     if (strs[0] != NULL)
//     {
//         while (strs[a] != NULL)
//         {
//             printf("Token %zu: %s\n", b, strs[a]);
//             free(strs[a]);
//             a++;
//             b++;
//         }
//         free(strs);
//     }
//     else
//     {
//         printf("There are no tokens in this string!\n");
//     }

//     return (0);
// }
