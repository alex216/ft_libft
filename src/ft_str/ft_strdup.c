/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 19:55:12 by yliu              #+#    #+#             */
/*   Updated: 2024/02/17 16:37:29 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dst;
	size_t	length;

	if (src == NULL)
		return (NULL);
	length = ft_strlen(src);
	dst = ft_xcalloc(sizeof(char) * (length + 1));
	if (dst == NULL)
		return (NULL);
	ft_strlcpy(dst, src, length + 1);
	return (dst);
}
