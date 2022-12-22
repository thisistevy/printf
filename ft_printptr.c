/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iung <iung@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:12:14 by iung              #+#    #+#             */
/*   Updated: 2022/12/22 17:25:32 by iung             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_ptrhexalen(unsigned long int n)
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

unsigned long int	ft_ptrhexamin(unsigned long int n)
{
	char	*base;

	base = "0123456789abcdef";
	if (n >= 16)
	{
		ft_ptrhexamin(n / 16);
	}
	ft_putchar((base[n % 16]));
	return (n);
}

unsigned long int	ft_printptr(unsigned long int n)
{
	if (n == 0)
		return (write(1, "(nil)", 5));
	ft_printf("0x");
	ft_ptrhexamin(n);
	return (ft_ptrhexalen(n) + 2);
}
