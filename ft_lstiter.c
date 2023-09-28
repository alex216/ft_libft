/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 22:03:07 by yliu              #+#    #+#             */
/*   Updated: 2023/09/27 22:03:09 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *tlist_ptr, void (*f)(void *))
{
	if (tlist_ptr == NULL || f == NULL)
		return ;
	while (tlist_ptr)
	{
		f(tlist_ptr);
		tlist_ptr = tlist_ptr->next;
	}
}
