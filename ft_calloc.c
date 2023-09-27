/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 23:57:30 by yliu              #+#    #+#             */
/*   Updated: 2023/09/27 22:15:54 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*dst_ptr;

	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);
	dst_ptr = (void *)malloc(size * count);
	if (dst_ptr == NULL)
	{
		errno = ENOMEM;
		return (NULL);
	}
	ft_bzero(dst_ptr, (size * count));
	return (dst_ptr);
}
