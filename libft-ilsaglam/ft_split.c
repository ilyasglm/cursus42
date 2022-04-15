/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsaglam <ilsaglam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 16:16:51 by ilsaglam          #+#    #+#             */
/*   Updated: 2022/04/15 18:51:22 by ilsaglam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_word_count(char const *str, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i])
			j++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (j);
}

void	ft_freetab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab[i]);
}

char	*ft_subdup(const char *s, int start, int len, char **tab)
{
	int		i;
	char	*dst;

	i = 0;
	dst = malloc(sizeof(char) * (len + 1));
	if (!dst)
	{
		ft_freetab(tab);
		return (0);
	}
	while (i < len)
	{
		dst[i] = s[start + i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	**ft_split(char const *s, char c)
{
	int		x;
	int		y;
	int		i;
	char	**tab;

	x = 0;
	i = 0;
	tab = malloc(sizeof(char *) * (ft_word_count(s, c) + 1));
	if (!tab)
		return (0);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		y = i;
		while (s[i] && s[i] != c)
			i++;
		tab[x++] = ft_subdup(s, y, i - y, tab);
	}
	tab[ft_word_count(s, c)] = 0;
	return (tab);
}
