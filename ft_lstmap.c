/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 21:56:54 by yliu              #+#    #+#             */
/*   Updated: 2023/09/27 21:56:58 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *p, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first;
	t_list	*tmp;

	if (p == NULL || f == NULL || del == NULL)
		return (NULL);
	first = p;
	while (p)
	{
		ft_lstadd_back(&first, f(p));
		tmp = p->next;
		ft_lstdelone(p, del);
		p = tmp;
	}
	return (first);
}
