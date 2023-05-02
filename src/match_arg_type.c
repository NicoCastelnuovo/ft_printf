/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match_arg_type.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncasteln <ncasteln@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 17:23:22 by ncasteln          #+#    #+#             */
/*   Updated: 2023/05/02 10:00:24 by ncasteln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	match_arg_type(const char *type, va_list ap)
{
	if (ft_strchr("c%", *type))
		return (print_char(type, ap));
	else if (*type == 's')
		return (print_string(ap));
	else if (ft_strchr("di", *type))
		return (print_signed(ap));
	else if (*type == 'u')
		return (print_unsigned(ap));
	else if (ft_strchr("pxX", *type), *type)
		return (print_hex(type, ap));
	return (0);
}
