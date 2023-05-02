/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_signed.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncasteln <ncasteln@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 17:49:09 by ncasteln          #+#    #+#             */
/*   Updated: 2023/05/02 10:56:13 by ncasteln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	print_signed(va_list ap)
{
	int	n;

	n = va_arg(ap, int);
	ft_putnbr_fd(n, 1);
	return (get_digit_len(n));
}
