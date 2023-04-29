/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncasteln <ncasteln@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 16:06:29 by ncasteln          #+#    #+#             */
/*   Updated: 2023/04/28 16:57:11 by ncasteln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		print_unsigned(va_list ap)
{
	unsigned int	u;

	u = va_arg(ap, unsigned int);
	ft_putlong(u);
	return (get_digit_length(u));
}
