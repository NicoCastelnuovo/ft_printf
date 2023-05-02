/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncasteln <ncasteln@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 17:44:27 by ncasteln          #+#    #+#             */
/*   Updated: 2023/05/02 09:53:24 by ncasteln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

int	print_char(const char *s, va_list ap)
{
	int		n_printed;
	char	c;

	n_printed = 0;
	if (*s == '%')
	{
		ft_putchar_fd('%', 1);
		n_printed++;
	}
	else
	{
		c = va_arg(ap, int);
		ft_putchar_fd(c, 1);
		n_printed++;
	}
	return (n_printed);
}
