/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexamax.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iung <iung@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:26:39 by iung              #+#    #+#             */
/*   Updated: 2022/12/12 10:28:04 by iung             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_hexalenmax(unsigned long int n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		i++;
		n = n / 16;
	}
	return (i);
}

unsigned long int	ft_hexamax(unsigned long int n)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (n >= 16)
		ft_hexamax(n / 16);
	ft_putchar((base[n % 16]));
	return (n);
}

unsigned long int	ft_printhexamax(unsigned long int n)
{
	if (n == 0)
		return (write(1, "0", 1));
	ft_hexamax(n);
	return (ft_hexalenmax(n));
}
