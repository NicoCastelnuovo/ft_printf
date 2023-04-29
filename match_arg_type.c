/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match_arg_type.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncasteln <ncasteln@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 17:23:22 by ncasteln          #+#    #+#             */
/*   Updated: 2023/04/29 11:12:37 by ncasteln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	match_arg_type(const char *type, va_list ap)
{
	if (ft_strchr("c%", *type))
		return (print_char(type, ap));
	else if ('s' == *type)
		return (print_string(ap));
	else if (ft_strchr("di", *type))
		return (print_signed(ap));
	else if ('u' == *type)
		return (print_unsigned(ap));
	else if (ft_strchr("pxX", *type), *type)
		return (print_address(type, ap));
	return (0);
}



