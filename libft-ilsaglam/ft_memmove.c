/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsaglam <ilsaglam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 17:11:53 by ilsaglam          #+#    #+#             */
/*   Updated: 2022/04/13 17:33:16 by ilsaglam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s1;
	char	*s2;
	size_t	i;

	i = 0;
	if (!dst || !src)
		return (0);
	s1 = (char *)dst;
	s2 = (char *)src;
	if (dst < src)
	{
		while (i < len)
		{
			s1[i] = s2[i];
			i++;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
