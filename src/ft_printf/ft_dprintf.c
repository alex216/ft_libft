/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.jp>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:44:15 by yliu              #+#    #+#             */
/*   Updated: 2024/04/04 21:30:11 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	pf_process_int(char c, va_list *ap, struct s_main *t_info, int fd)
{
	int	i;

	i = va_arg(*ap, int);
	if (c == 'c')
	{
		ft_putchar_fd(i, fd);
		t_info->prt_len++;
	}
	if (c == 'd' || c == 'i')
	{
		ft_putnbr_fd(i, fd);
		pf_calculate_long_len((long)i, c, t_info);
	}
}

static void	pf_process_unsigned_int(char c, va_list *ap, struct s_main *t_info,
		int fd)
{
	unsigned int	un;

	un = va_arg(*ap, unsigned int);
	ft_putunbr_fd(un, fd, c);
	pf_calculate_long_len((long)un, c, t_info);
}

static void	pf_process_unsigned_ll(va_list *ap, struct s_main *t_info, int fd)
{
	unsigned long long	uli;

	uli = va_arg(*ap, unsigned long long);
	ft_putstr_fd("0x", fd);
	ft_putpointer_fd(uli, fd);
	t_info->prt_len += 2;
	pf_calculate_ull_len(uli, HEX_NUMBER, t_info);
}

static void	output_va(va_list *ap, const char c, struct s_main *t_info, int fd)
{
	char	*str;

	if (c == 's')
	{
		str = va_arg(*ap, char *);
		ft_putstr_fd(str, fd);
		pf_calculate_str_len(str, t_info);
	}
	if (c == 'c' || c == 'd' || c == 'i')
		pf_process_int(c, ap, t_info, fd);
	if (c == 'u' || c == 'x' || c == 'X')
		pf_process_unsigned_int(c, ap, t_info, fd);
	if (c == 'p')
		pf_process_unsigned_ll(ap, t_info, fd);
	if (c == '%')
	{
		ft_putchar_fd('%', fd);
		t_info->prt_len++;
	}
}

int	ft_dprintf(int fd, const char *fmt, ...)
{
	va_list			ap;
	struct s_main	t_info;

	t_info.prt_len = 0;
	va_start(ap, fmt);
	while (*fmt != '\0')
	{
		if (*fmt == '%' && *(fmt + 1) != '\0' && ft_strchr(C_LIST, *(fmt + 1)))
			output_va(&ap, *++fmt, &t_info, fd);
		else
		{
			ft_putchar_fd(*fmt, fd);
			t_info.prt_len++;
		}
		fmt++;
	}
	va_end(ap);
	return (t_info.prt_len);
}

// #include <stdio.h>
// #include <limits.h>
// #include <fcntl.h>
//
// int	main(void)
// {
// 	int fd = open("./txt", O_WRONLY);
// 	ft_printf_fd(fd, "hello");
// 	return (0);
// }
