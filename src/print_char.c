/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncasteln <ncasteln@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 17:44:27 by ncasteln          #+#    #+#             */
/*   Updated: 2023/05/02 10:09:38 by ncasteln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	print_char(const char *s, va_list ap)
{
	char	c;

	if (*s == '%')
		ft_putchar_fd('%', 1);
	else
	{
		c = va_arg(ap, int);
		ft_putchar_fd(c, 1);
	}
	return (1);
}
