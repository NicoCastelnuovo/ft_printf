/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_signed.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncasteln <ncasteln@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 17:49:09 by ncasteln          #+#    #+#             */
/*   Updated: 2023/04/29 12:18:36 by ncasteln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_signed(va_list ap)
{
	int	n;
	int	n_printed;

	n_printed = 0;
	n = va_arg(ap, int);
	ft_putnbr_fd(n, 1);
	return (get_digit_length(n));
	// if (n == 0)
	// {
	// 	ft_putchar_fd('0', 1);
	// 	return (1);
	// }
	// if (n > 0)
	// {
	// 	ft_putnbr_fd(n, 1);
	// 	n_printed += get_digit_length((long) n);
	// }
	// if (n < 0)
	// {
	// 	if (n < -2147483647)
	// 	{
	// 		ft_putnbr_fd(n, 1);
	// 		return (11);
	// 	}
	// 	ft_putnbr_fd(n, 1);
	// 	n *= -1;
	// 	n_printed += get_digit_length((long) n) + 1;
	// }
}

