/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncasteln <ncasteln@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 18:13:38 by ncasteln          #+#    #+#             */
/*   Updated: 2023/05/08 09:59:00 by ncasteln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "./libft/libft.h"
# include <stdarg.h>

int	ft_printf(const char *s, ...);
int	get_digit_len(long n);

int	print_char(char type, va_list ap);
int	print_string(va_list ap);
int	print_signed(va_list ap);
int	print_unsigned(va_list ap);
int	print_hex(char type, va_list ap);
int	print_address(va_list ap);

#endif
