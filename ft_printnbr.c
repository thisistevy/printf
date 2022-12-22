/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iung <iung@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:04:03 by iung              #+#    #+#             */
/*   Updated: 2022/12/12 09:36:28 by iung             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_countnbr(int n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

int	ft_putnbr(int n)
{
	int	is_neg;

	is_neg = 0;
	if (n == 0)
		return (write(1, "0", 1));
	else if (n == -2147483648)
		return (write(1, "-2147483648", 11));
	else
	{
		if (n < 0)
		{
			is_neg = 1;
			write(1, "-", 1);
			n = n * -1;
		}
		if (n > 9)
		{
			ft_putnbr(n / 10);
		}
		ft_putchar((n % 10) + '0');
	}
	if (is_neg == 1)
		return (ft_countnbr(n) + 1);
	return (ft_countnbr(n));
}
