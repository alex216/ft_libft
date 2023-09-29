/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 18:01:58 by yliu              #+#    #+#             */
/*   Updated: 2023/09/30 01:18:38 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_numlen(int n)
{
	size_t	len;

	len = 1 + (n < 0);
	while (n / 10)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t			len;
	char			*dest;
	unsigned int	un;

	len = ft_numlen(n);
	dest = malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
		return (NULL);
	dest[len] = '\0';
	if (n == 0)
		dest[0] = '0';
	if (n < 0)
	{
		dest[0] = '-';
		un = -n;
	}
	else
		un = n;
	while (un > 0)
	{
		dest[--len] = (un % 10) + '0';
		un = un / 10;
	}
	return (dest);
}
