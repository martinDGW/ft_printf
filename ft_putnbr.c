/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegraeu <mdegraeu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 15:54:12 by mdegraeu          #+#    #+#             */
/*   Updated: 2023/10/13 11:45:18 by mdegraeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	long	val;

	val = nb;
	if (val < 0)
	{
		val *= -1;
		write(1, "-", 1);
	}
	if (val > 9)
	{
		ft_putnbr(val / 10);
		ft_putnbr(val % 10);
	}
	else
		ft_putchar(val + '0');
	return (ft_char_nb(nb, 10));
}
