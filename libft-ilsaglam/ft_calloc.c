/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsaglam <ilsaglam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 19:33:21 by ilsaglam          #+#    #+#             */
/*   Updated: 2022/04/15 19:01:31 by ilsaglam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*pt;

	if (!count)
		count = 2;
	if (!size)
		size = 2;
	pt = malloc(count * size);
	if (!pt)
		return (pt);
	ft_bzero(pt, (count * size));
	return (pt);
}
