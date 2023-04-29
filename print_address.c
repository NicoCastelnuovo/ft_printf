/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_address.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncasteln <ncasteln@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 15:31:22 by ncasteln          #+#    #+#             */
/*   Updated: 2023/04/29 10:58:12 by ncasteln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putnbr_hex(unsigned long n, int uppercase)
{
	int	len;

	len = 0;
	if (n >= 16)
	{
		len += ft_putnbr_hex(n / 16, uppercase);
		n = n % 16;
	}
	if (n < 16)
	{
		if (n < 10)
			ft_putchar_fd(n + 48, 1);
		else
		{
			if (!uppercase)
				ft_putchar_fd(n + 87, 1);
			else
				ft_putchar_fd(n + 55, 1);
		}
		len++;
	}
	return (len);
}

int	print_address(const char *type, va_list ap)
{
	void	*p;
	int		len;

	len = 0;

	p = va_arg(ap, void *);
	if (*type == 'x')
	{
		len = ft_putnbr_hex((unsigned int) p, 0);
		return (len);
	}
	if (*type == 'X')
	{
		len = ft_putnbr_hex((unsigned int) p, 1);
		return (len);
	}
	ft_putstr_fd("0x", 1);
	return (ft_putnbr_hex((unsigned long) p, 0) + 2);
}
