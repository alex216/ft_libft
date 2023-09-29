/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 11:26:44 by yliu              #+#    #+#             */
/*   Updated: 2023/09/30 01:09:52 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dst;
	size_t	i;
	size_t	start;
	size_t	end;

	i = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (ft_strchr(set, s1[i]) != NULL)
		i++;
	start = i;
	while (s1[i] != '\0')
	{
		if (ft_strchr(set, s1[i]) == NULL)
			end = i;
		i++;
	}
	dst = ft_substr(s1, start, end - start + 1);
	return (dst);
}
