/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_digits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncasteln <ncasteln@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 10:33:33 by ncasteln          #+#    #+#             */
/*   Updated: 2023/05/08 12:34:53 by ncasteln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putunsigned(unsigned int n)
{
	if (n >= 10)
	{
		ft_putunsigned(n / 10);
		n = n % 10;
	}
	if (n < 10)
		ft_putchar_fd(n + 48, 1);
}

int	print_di(va_list ap)
{
	int	n;

	n = va_arg(ap, int);
	ft_putnbr_fd(n, 1);
	return (get_digit_len(n));
}

int	print_u(va_list ap)
{
	unsigned int	u;

	u = va_arg(ap, unsigned int);
	ft_putunsigned(u);
	return (get_digit_len(u));
}
