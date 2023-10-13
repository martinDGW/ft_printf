/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_nb_u.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 15:32:04 by mdegraeu          #+#    #+#             */
/*   Updated: 2021/11/26 13:04:44 by mdegraeu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_char_nb_u(unsigned int nb, int base)
{
	int	ct;

	ct = 0;
	if (nb == 0)
		ct++;
	while (nb)
	{
		nb /= base;
		ct++;
	}
	return (ct);
}
