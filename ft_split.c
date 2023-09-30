/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 11:41:13 by yliu              #+#    #+#             */
/*   Updated: 2023/09/30 02:55:11 by yliu             ###   ########.fr       */
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
		if (ndl == NULL)
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
	int			i;

	i = 0;
	while (*str != '\0')
	{
		if (*str != sep)
		{
			word_len = 0;
			while (str[word_len] != '\0' && str[word_len] != sep)
				word_len++;
			dst[i] = ft_substr(str, 0, word_len);
			if (dst[i] == NULL)
			{
				while (i >= 0)
					free(dst[i--]);
				free(dst);
			}
			i++;
			str = str + word_len;
		}
		else
			str++;
	}
	dst[i] = NULL;
}

char	**ft_split(char const *str, char sep)
{
	char		**dst;

	if (str == NULL)
		return (NULL);
	dst = malloc(sizeof(char *) * ((wc((char *)str, sep)) + 1));
	if (dst == NULL)
		return (NULL);
	ft_splitexec(dst, str, sep);
	return (dst);
}
