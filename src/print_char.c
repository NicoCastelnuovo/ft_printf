/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncasteln <ncasteln@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 17:44:27 by ncasteln          #+#    #+#             */
/*   Updated: 2023/05/08 12:34:56 by ncasteln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_c(char type, va_list ap)
{
	if (type == '%')
		ft_putchar_fd('%', 1);
	else
		ft_putchar_fd(va_arg(ap, int), 1);
	return (1);
}

int	print_s(va_list ap)
{
	char	*s;

	s = va_arg(ap, char *);
	if (!s)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	ft_putstr_fd(s, 1);
	return (ft_strlen(s));
}
