/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 23:45:33 by yliu              #+#    #+#             */
/*   Updated: 2023/09/27 20:24:58 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_space(char c)
{
	while (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r'
		|| c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int		flag;
	long	n;

	n = 0;
	flag = 1;
	while (is_space(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			flag = -1;
		str++;
	}
	while ('0' <= *str && *str <= '9')
	{
		if (flag * n > (LONG_MAX - (*str - '0')) / 10)
			return (-1);
		if (flag * n < (LONG_MIN + (*str - '0')) / 10)
			return (0);
		n = n * 10 + (*str - '0');
		str++;
	}
	return ((int)(flag * n));
}
