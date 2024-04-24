/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 22:33:27 by yliu              #+#    #+#             */
/*   Updated: 2024/04/24 20:00:45 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

// no condition of start + len > s_len

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;

	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (start + len > ft_strlen(s))
		len = ft_strlen(s) - start;
	dst = ft_xcalloc(sizeof(char) * (len + 1));
	ft_strlcpy(dst, s + start, len + 1);
	return (dst);
}
