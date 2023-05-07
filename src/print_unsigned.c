/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncasteln <ncasteln@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 16:06:29 by ncasteln          #+#    #+#             */
/*   Updated: 2023/05/07 13:25:25 by ncasteln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

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

int	print_unsigned(va_list ap)
{
	unsigned int	u;

	u = va_arg(ap, unsigned int);
	ft_putunsigned(u);
	return (get_digit_len(u));
}
