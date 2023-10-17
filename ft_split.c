/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 11:41:13 by yliu              #+#    #+#             */
/*   Updated: 2023/10/11 21:52:23 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	wc(char *hystck, char sep)
{
	char		*ndl;
	size_t		words;

	words = 0;
	while (*hystck != '\0')
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

static int	free_all(char **dst, size_t i)
{
	while (i > 0)
		free(dst[--i]);
	free(dst);
	return (FALSE);
}

static int	ft_splitexec(char **dst, char const *str, char sep)
{
	size_t			word_len;
	size_t			i;

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
				return (free_all(dst, i));
			i++;
			str = str + word_len;
		}
		else
			str++;
	}
	dst[i] = NULL;
	return (SUCCESS);
}

char	**ft_split(char const *str, char sep)
{
	char		**dst;

	if (str == NULL)
		return (NULL);
	dst = malloc(sizeof(char *) * ((wc((char *)str, sep)) + 1));
	if (dst == NULL)
		return (NULL);
	if (ft_splitexec(dst, str, sep))
		return (NULL);
	return (dst);
}
