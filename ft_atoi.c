/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 23:45:33 by yliu              #+#    #+#             */
/*   Updated: 2023/09/27 16:46:44 by yliu             ###   ########.fr       */
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
	int	flag;
	int	n;

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
		n = n * 10 + (*str - '0');
		str++;
	}
	return (flag * n);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*s1 = "293487";
	printf("%d\n", atoi(s1));
	printf("%d\n", ft_atoi(s1));
	char	*s2 = "2147483648";
	printf("%d\n", atoi(s2));
	printf("%d\n", ft_atoi(s2));
	char	*s3 = "-2147483647";
	printf("%d\n", atoi(s3));
	printf("%d\n", ft_atoi(s3));

	char	*s4 = "0";
	printf("%d\n", atoi(s4));
	printf("%d\n", ft_atoi(s4));

	char	*s5 = "-0";
	printf("%d\n", atoi(s5));
	printf("%d\n", ft_atoi(s5));
}
