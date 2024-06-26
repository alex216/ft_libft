/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.jp>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 19:55:12 by yliu              #+#    #+#             */
/*   Updated: 2024/04/25 10:45:07 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

char	*ft_strdup(const char *src)
{
	char	*dst;
	size_t	length;

	if (src == NULL)
		return (NULL);
	length = ft_strlen(src);
	dst = ft_xcalloc(sizeof(char) * (length + 1));
	ft_strlcpy(dst, src, length + 1);
	return (dst);
}
