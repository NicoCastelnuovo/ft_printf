/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncasteln <ncasteln@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 09:31:04 by ncasteln          #+#    #+#             */
/*   Updated: 2023/05/08 09:58:14 by ncasteln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	match_arg_type(const char *type, va_list ap)
{
	if (*type == '%' || *type == 'c')
		return (print_char(*type, ap));
	else if (*type == 's')
		return (print_string(ap));
	if (*type == 'd' || *type == 'i')
		return (print_signed(ap));
	else if (*type == 'u')
		return (print_unsigned(ap));
	else if (*type == 'x' || *type == 'X')
		return (print_hex(*type, ap));
	else if (*type == 'p')
		return (print_address(ap));
	return (0);
}

int	ft_printf(const char *s, ...)
{
	va_list	ap;
	int		n_printed;

	n_printed = 0;
	va_start(ap, s);
	while (*s)
	{
		if (*s != '%')
		{
			ft_putchar_fd(*(s++), 1);
			n_printed++;
		}
		else
		{
			n_printed += match_arg_type(++s, ap);
			s++;
		}
	}
	va_end(ap);
	return (n_printed);
}
