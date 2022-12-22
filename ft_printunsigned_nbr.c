/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned_nbr.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iung <iung@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 11:31:31 by iung              #+#    #+#             */
/*   Updated: 2022/12/12 09:37:33 by iung             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_countunsigned_nbr(unsigned int n)
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

int	ft_printunsigned_nbr(unsigned int n)
{
	if (n == 0)
		return (write(1, "0", 1));
	if (n > 9)
	{
		ft_printunsigned_nbr(n / 10);
	}
	ft_putchar((n % 10) + '0');
	return (ft_countunsigned_nbr(n));
}
