/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dl_lstfirst.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.jp>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 18:19:15 by yliu              #+#    #+#             */
/*   Updated: 2024/04/25 18:20:15 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_double_linked_list.h"

t_lst	*ft_dl_lstfirst(const t_lst *lst_p)
{
	if (lst_p == NULL)
		return (NULL);
	while (!lst_p->is_sentinel)
		lst_p = lst_p->prev_p;
	return (lst_p->next_p);
}
