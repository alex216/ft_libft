/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.jp>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 11:26:44 by yliu              #+#    #+#             */
/*   Updated: 2024/05/06 14:35:23 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memory.h"
#include "ft_str.h"
#include "ft_utils.h"
#include <stddef.h>

static size_t	_res_start(char const *s1, unsigned char *used)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (!used[(unsigned char)s1[i]])
			break ;
		i++;
	}
	return (i);
}

static size_t	_res_end(char const *s1, unsigned char *used)
{
	size_t	i;
	size_t	end;

	i = 0;
	while (s1[i] != '\0')
	{
		if (!used[(unsigned char)s1[i]])
			end = i;
		i++;
	}
	return (end);
}

static void	asign_array_to_set(char const *set, unsigned char *used)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		used[(unsigned char)set[i]] = 1;
		i++;
	}
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t			start;
	size_t			end;
	unsigned char	*used;

	if (s1 == NULL || set == NULL)
		return (NULL);
	used = ft_xcalloc(MAX_CHAR);
	asign_array_to_set(set, used);
	start = _res_start(s1, used);
	end = _res_end(s1, used);
	return (ft_substr(s1, start, end - start + 1));
}
