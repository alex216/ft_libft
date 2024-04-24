/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_xcalloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.jp>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 17:57:11 by yliu              #+#    #+#             */
/*   Updated: 2024/04/24 16:47:32 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memory.h"
#include "utils.h"

void	*ft_xcalloc(size_t sizet)
{
	void	*pointer;

	pointer = (void *)ft_calloc(1, sizet);
	if (!pointer)
		exit(EXIT_FAILURE);
	return (pointer);
}
