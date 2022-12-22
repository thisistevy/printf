/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexamin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iung <iung@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 17:45:52 by iung              #+#    #+#             */
/*   Updated: 2022/12/12 10:11:41 by iung             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_hexalenmin(unsigned int n)
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

unsigned int	ft_hexamin(unsigned int n)
{
	char	*base;

	base = "0123456789abcdef";
	if (n >= 16)
		ft_hexamin(n / 16);
	ft_putchar((base[n % 16]));
	return (n);
}

unsigned int	ft_printhexamin(unsigned int n)
{
	if (n == 0)
		return (write(1, "0", 1));
	ft_hexamin(n);
	return (ft_hexalenmin(n));
}
