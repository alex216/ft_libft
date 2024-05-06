/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dl_lstsize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.jp>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 16:05:17 by yliu              #+#    #+#             */
/*   Updated: 2024/04/26 14:57:56 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_double_linked_list.h"

size_t	ft_dl_lstsize(const t_lst *lst_p)
{
	size_t	size;

	if (lst_p == NULL)
		return (0);
	if (lst_p->prev_p->is_sentinel)
		return (lst_p->prev_p->is_sentinel);
	size = 0;
	while (!lst_p->is_sentinel)
	{
		size++;
		lst_p = lst_p->next_p;
	}
	return (size);
}
