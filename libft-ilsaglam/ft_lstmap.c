/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsaglam <ilsaglam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 19:36:21 by ilsaglam          #+#    #+#             */
/*   Updated: 2022/04/15 18:14:05 by ilsaglam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*dst;
	t_list	*new;
	int		lstsize;

	if (!lst || !f)
		return (0);
	lstsize = ft_lstsize(lst);
	while (lstsize)
	{
		new = ft_lstnew(f(lst->content));
		if (!new)
		{
			ft_lstclear(&lst, del);
			return (0);
		}
		ft_lstadd_back(&dst, new);
		lst = lst->next;
		lstsize--;
	}
	return (dst);
}
