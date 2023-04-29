/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
// /*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncasteln <ncasteln@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 09:31:04 by ncasteln          #+#    #+#             */
/*   Updated: 2023/04/23 16:51:20 by ncasteln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
			ft_putchar_fd(*s, 1);
			n_printed++;
			s++;
		}
		else
		{
			s++;
			n_printed += match_arg_type(s, ap);
			s++;
		}
	}
	va_end(ap);
	return (n_printed);
}
