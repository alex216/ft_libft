/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 15:40:12 by yliu              #+#    #+#             */
/*   Updated: 2023/09/16 17:12:50 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	if (*needle == '\0')
		return ((char *)haystack);
	if (len < ft_strlen(needle))
		return (NULL);
	while (*haystack != '\0' && len > 0)
	{
		i = 0;
		while (*(needle + i) == *(haystack + i))
		{
			if (*(needle + i + 1) == '\0')
				return ((char *)haystack);
			i++;
		}
		haystack = haystack + (i + 1);
		len = len - (i + 1);
	}
	return (NULL);
}
