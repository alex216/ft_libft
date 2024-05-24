/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.jp>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 21:35:20 by yliu              #+#    #+#             */
/*   Updated: 2024/05/23 21:35:53 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"
#include <stdarg.h>

static int	_max(int a, int b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

int	ft_max(int argc, int a, int b, ...)
{
	int		tmp;
	int		ans;
	va_list	ap;
	int		i;

	va_start(ap, b);
	ans = _max(a, b);
	i = 2;
	while (i < argc)
	{
		tmp = va_arg(ap, int);
		ans = _max(ans, tmp);
		i++;
	}
	va_end(ap);
	return (ans);
}
