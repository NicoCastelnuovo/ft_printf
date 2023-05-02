/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncasteln <ncasteln@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:04:16 by ncasteln          #+#    #+#             */
/*   Updated: 2023/05/02 09:53:19 by ncasteln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

void	ft_putunsigned(unsigned int n)
{
	if (n < 0)
	{
		ft_putchar_fd('-', 1);
		n = n * -1;
	}
	if (n >= 10)
	{
		ft_putunsigned(n / 10);
		n = n % 10;
	}
	if (n < 10)
		ft_putchar_fd(n + 48, 1);
}
