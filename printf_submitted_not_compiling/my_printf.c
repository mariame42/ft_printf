/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meid <meid@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 11:57:12 by meid              #+#    #+#             */
/*   Updated: 2024/07/23 09:52:43 by meid             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	cons(char type, va_list arg)
{
	if (type == 'c')
		return (put_char(va_arg(arg, int)));
	if (type == 's')
		return (put_str(va_arg(arg, char *)));
	if (type == 'p')
		return (put_ptr(va_arg(arg, void *)));
	if (type == 'd' || type == 'i')
		return (put_nbr(va_arg(arg, int)));
	if (type == 'u')
		return (put_nbr(va_arg(arg, unsigned int)));
	if (type == 'x' || type == 'X')
		return (put_hex(va_arg(arg, unsigned int), type));
	if (type == '%')
		return (put_char('%'));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		len;
	int		tmp;

	va_start(arg, str);
	len = 0;
	while (*str)
	{
		if (*str == '%')
		{
			tmp = cons(*(++str), arg);
			if (tmp == -1)
				return (-1);
			len += tmp;
		}
		else
		{
			if (put_char(*str) == -1)
				return (-1);
			len++;
		}
		str++;
	}
	va_end(arg);
	return (len);
}
