/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 23:57:30 by yliu              #+#    #+#             */
/*   Updated: 2023/09/17 10:02:42 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*dst_ptr;

	dst_ptr = (void *)malloc(sizeof(size * count));
	if (!dst_ptr)
		return (NULL);
	ft_bzero(dst_ptr, size);
	return (dst_ptr);
}
