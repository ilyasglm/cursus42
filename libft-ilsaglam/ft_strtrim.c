/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsaglam <ilsaglam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 12:51:37 by ilsaglam          #+#    #+#             */
/*   Updated: 2022/04/14 14:18:31 by ilsaglam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*dest;

	start = 0;
	end = ft_strlen(s1);
	while (ft_check_set(s1[start], set) && s1[start])
		start++;
	while (ft_check_set(s1[end - 1], set) && end > start)
		end--;
	dest = malloc(sizeof(char) * (end - start + 1));
	if (!dest)
		return (0);
	dest = ft_substr(s1, start, end - start);
	return (dest);
}
