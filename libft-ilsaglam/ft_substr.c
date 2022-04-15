/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsaglam <ilsaglam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 15:16:55 by ilsaglam          #+#    #+#             */
/*   Updated: 2022/04/14 12:23:59 by ilsaglam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;

	i = 0;
	if (ft_strlen(s) < start)
	{
		dest = malloc(sizeof(char) * 1);
		if (!dest)
			return (0);
		dest[i] = 0;
		return (dest);
	}
	dest = malloc(sizeof(char) * (len + 1));
	if (!dest || len > ft_strlen(s))
		return (0);
	while (i < len)
	{
		dest[i] = s[start];
		i++;
		start++;
	}
	dest[i] = 0;
	return (dest);
}
