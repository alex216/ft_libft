/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 12:38:01 by yliu              #+#    #+#             */
/*   Updated: 2023/09/28 18:58:56 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// unsafe when either s1 or s2 is NULL.
// but this is how original strncmp works.

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if ((s1 == NULL && n == 0) || (s2 == NULL && n == 0))
		return (0);
	while (*(s1 + i) != '\0' && *(s1 + i) == *(s2 + i) && i < n)
		i++;
	if (i == n)
		return (0);
	return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
}
