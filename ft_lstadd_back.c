/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 22:53:53 by yliu              #+#    #+#             */
/*   Updated: 2023/09/28 16:34:25 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *n)
{
	t_list	*tlist_ptr;

	if (lst == NULL || n == NULL )
		return ;
	if (*lst == NULL)
		*lst = n;
	else
	{
		tlist_ptr = ft_lstlast(*lst);
		tlist_ptr->next = n;
	}
}
