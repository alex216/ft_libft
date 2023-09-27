/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 12:47:18 by yliu              #+#    #+#             */
/*   Updated: 2023/09/27 19:36:46 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	d_i;

	if (dst == NULL && dstsize == 0)
		return (ft_strlen(src));
	d_i = 0;
	while (*dst != '\0' && d_i < dstsize)
	{
		d_i++;
		dst++;
	}
	src_len = ft_strlcpy(dst, src, dstsize - d_i);
	return (d_i + src_len);
}

// dst == NULL && dstsize == 0
// this is not written in manual, but this is how original strlcat works.
