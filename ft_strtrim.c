/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 11:26:44 by yliu              #+#    #+#             */
/*   Updated: 2023/10/17 11:03:34 by yliu             ###   ########.fr       */
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
	while (s1[i] != '\0')
	{
		if (ft_strchr(set, s1[i]) == NULL)
			break ;
		i++;
	}
	start = i;
	end = i;
	while (s1[i] != '\0')
	{
		if (ft_strchr(set, s1[i]) == NULL)
			end = i;
		i++;
	}
	dst = ft_substr(s1, start, end - start + 1);
	return (dst);
}
