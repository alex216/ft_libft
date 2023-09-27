/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 11:41:13 by yliu              #+#    #+#             */
/*   Updated: 2023/09/17 17:54:48 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	wc(char *hystck, char sep)
{
	char		*ndl;
	size_t		words;

	words = 0;
	while (*hystck)
	{
		ndl = ft_strchr(hystck, (int)sep);
		if (!ndl)
			return (words + 1);
		if (ndl != hystck)
			words++;
		hystck = ndl + 1;
	}
	return (words);
}

static void	ft_splitexec(char **dst, char const *str, char sep)
{
	int			word_len;

	while (*str)
	{
		if (*str != sep)
		{
			word_len = 0;
			while (str[word_len] && str[word_len] != sep)
				word_len++;
			*dst++ = ft_substr(str, 0, word_len);
			str = str + word_len;
		}
		else
			str++;
	}
	dst = NULL;
}

char	**ft_split(char const *str, char sep)
{
	char		**dst;

	if (!str)
		return (NULL);
	dst = malloc(sizeof(char *) * (wc((char *)str, sep)) + 1);
	if (!dst)
		return (NULL);
	ft_splitexec(dst, str, sep);
	return (dst);
}
