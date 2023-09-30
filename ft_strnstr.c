/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 15:40:12 by yliu              #+#    #+#             */
/*   Updated: 2023/09/30 05:05:26 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (*needle == '\0' || len == 0)
//	if (*needle == '\0')
		return ((char *)haystack);
	// if (len < ft_strlen(needle))
	// 	return (NULL);
	j = 0;
	while (*haystack != '\0' && j < len)
	{
		i = 0;
		while (needle[i] == haystack[i] && j + i < len)
		{
			if (needle[i + 1] == '\0')
				return ((char *)haystack);
			i++;
		}
		haystack++;
		j++;
	}
	return (NULL);
}
