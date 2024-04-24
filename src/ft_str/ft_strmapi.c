/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.jp>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 19:59:28 by yliu              #+#    #+#             */
/*   Updated: 2024/04/24 20:01:41 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*dst;

	if (str == NULL || f == NULL)
		return (NULL);
	dst = ft_xcalloc(sizeof(char) * (ft_strlen(str) + 1));
	i = 0;
	while (str[i] != '\0')
	{
		dst[i] = f(i, *(str + i));
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
