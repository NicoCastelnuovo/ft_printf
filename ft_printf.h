/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncasteln <ncasteln@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 18:13:38 by ncasteln          #+#    #+#             */
/*   Updated: 2023/05/02 10:56:46 by ncasteln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "./libft/libft.h"
# include <stdarg.h>

int		ft_printf(const char *s, ...);
int		match_arg_type(const char *type, va_list ap);
int		get_digit_len(long n);

int		print_char(const char *type, va_list ap);
int		print_string(va_list ap);
int		print_signed(va_list ap);
int		print_unsigned(va_list ap);
int		print_hex(const char *type, va_list ap);
void	ft_putunsigned(unsigned int n);

#endif
