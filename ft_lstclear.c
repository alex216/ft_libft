/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 23:05:42 by yliu              #+#    #+#             */
/*   Updated: 2023/09/27 15:10:03 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst_ptr, void (*del)(void *))
{
	t_list	*tlist_ptr;
	t_list	*tlist_tmp_ptr;

	if (lst_ptr == NULL || del == NULL)
		return ;
	tlist_ptr = *lst_ptr;
	while (tlist_ptr)
	{
		tlist_tmp_ptr = tlist_ptr->next;
		ft_lstdelone(tlist_ptr, del);
		tlist_ptr = tlist_tmp_ptr->next;
	}
	tlist_ptr = NULL;
}
