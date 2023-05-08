/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncasteln <ncasteln@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 17:44:27 by ncasteln          #+#    #+#             */
/*   Updated: 2023/05/08 09:47:52 by ncasteln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	print_char(char type, va_list ap)
{
	if (type == '%')
		ft_putchar_fd('%', 1);
	else
		ft_putchar_fd(va_arg(ap, int), 1);
	return (1);
}
