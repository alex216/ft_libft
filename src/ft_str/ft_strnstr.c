/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.jp>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 15:40:12 by yliu              #+#    #+#             */
/*   Updated: 2024/04/25 10:45:07 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (haystack == NULL || needle == NULL)
		return (NULL);
	if (*needle == '\0')
		return ((char *)haystack);
	j = 0;
	while (j < len && *haystack != '\0')
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
