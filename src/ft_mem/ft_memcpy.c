/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.jp>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:59:49 by yliu              #+#    #+#             */
/*   Updated: 2024/04/24 16:48:40 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memory.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void	*tmp;

	if (dst == NULL || src == NULL)
		return (NULL);
	tmp = dst;
	while (n--)
		*(char *)tmp++ = *(char *)src++;
	return (dst);
}
