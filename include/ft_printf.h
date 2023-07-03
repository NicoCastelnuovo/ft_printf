/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncasteln <ncasteln@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 18:13:38 by ncasteln          #+#    #+#             */
/*   Updated: 2023/07/03 09:15:09 by ncasteln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft.h"
# include <stdarg.h>

int	ft_printf(const char *s, ...);
int	get_digit_len(long n);
int	print_c(char type, va_list ap);
int	print_s(va_list ap);
int	print_di(va_list ap);
int	print_u(va_list ap);
int	print_x(char type, va_list ap);
int	print_p(va_list ap);

#endif
