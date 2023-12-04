/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putponbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboustaj <hboustaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:35:07 by hboustaj          #+#    #+#             */
/*   Updated: 2023/12/04 15:48:21 by hboustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putponbr(unsigned int n, int *count)
{
	if (n > 9)
	{
		ft_putponbr(n / 10, count);
		ft_putponbr((n % 10), count);
	}
	else
		ft_putchar((n + 48), count);
}
