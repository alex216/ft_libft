/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dl_lstcreate_ope.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.jp>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:04:09 by yliu              #+#    #+#             */
/*   Updated: 2024/04/25 10:42:42 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_double_linked_list.h"
#include "ft_utils.h"

static t_lst	*_ft_dl_lstcreate_a_node(t_record *record_p, size_t is_sentinel)
{
	t_lst	*lst_p;

	lst_p = ft_xcalloc(sizeof(t_lst));
	lst_p->payload_p = record_p;
	lst_p->is_sentinel = is_sentinel;
	lst_p->next_p = NULL;
	lst_p->prev_p = NULL;
	return (lst_p);
}

static bool	_ft_dl_lstadd_sentinel_to_node(t_lst *lst_pp)
{
	t_lst	*sentinel_p;

	sentinel_p = _ft_dl_lstcreate_a_node(NULL, true);
	if (!sentinel_p)
		return (false);
	lst_pp->next_p = sentinel_p;
	lst_pp->prev_p = sentinel_p;
	sentinel_p->next_p = lst_pp;
	sentinel_p->prev_p = lst_pp;
	return (true);
}

bool	ft_dl_lstadd_back_with_lst(t_lst **lst_pp, t_lst *new_p)
{
	t_lst	*sentinel_p;

	if (!new_p || !lst_pp)
		return (false);
	if (!*lst_pp)
	{
		if (!_ft_dl_lstadd_sentinel_to_node(new_p))
			return (false);
		*lst_pp = new_p;
	}
	else
	{
		sentinel_p = (*lst_pp)->prev_p;
		new_p->prev_p = sentinel_p->prev_p;
		new_p->next_p = sentinel_p;
		sentinel_p->is_sentinel++;
		sentinel_p->prev_p->next_p = new_p;
		sentinel_p->prev_p = new_p;
	}
	return (true);
}

bool	ft_dl_lstadd_front_with_lst(t_lst **lst_pp, t_lst *new_p)
{
	if (!new_p || !lst_pp)
		return (false);
	if (!*lst_pp)
	{
		if (!_ft_dl_lstadd_sentinel_to_node(new_p))
			return (false);
		*lst_pp = new_p;
	}
	else
	{
		new_p->prev_p = (*lst_pp)->prev_p;
		new_p->next_p = *lst_pp;
		(*lst_pp)->prev_p->is_sentinel++;
		(*lst_pp)->prev_p->next_p = new_p;
		(*lst_pp)->prev_p = new_p;
		*lst_pp = new_p;
	}
	return (true);
}
